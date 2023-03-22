

//------------------ START DROW RANGER ARCANA PROGRESS ------------------------

class AnimateDrowRangerArcanaScreenAction extends RunSequentialActions
{
	constructor( data )
	{
		super();
		this.data = data;
	}

	start()
	{
		var heroID = this.data.hero_id;
		var nDeaths = this.data.arcana_progress.deaths;
		var bFlawlessVictory = nDeaths < 1;
		var heroName = this.data.arcana_progress.arcana_hero_name;
		var startScore = this.data.arcana_progress.arcana_start_score;
		var endScore = this.data.arcana_progress.arcana_end_score;
		var incrementScore = endScore - startScore;

		$.Msg( "arcana progress drow ranger action deaths" + nDeaths );

		// Create the screen and do a bunch of initial setup
		var panel = StartNewScreen( 'GenericArcanaProgressScreen' );
		if ( panel.BHasLayoutSnippet( "ArcanaProgress_" + heroName ) )
		{
			panel.BLoadLayoutSnippet( "ArcanaProgress_" + heroName );
		}
		else
		{
			$.Msg( "failed to load snippet: " + "ArcanaProgress_" + heroName );
			panel.BLoadLayoutSnippet( "GenericArcanaProgress" );
		}

		panel.AddClass( heroName );
		panel.SetHasClass( "FlawlessVictory", bFlawlessVictory );

		panel.SetDialogVariableLocString( 'killeater_type_name', this.data.arcana_progress.killeater_type_name );

		var heroModel = panel.FindChildTraverse( 'GenericArcanaModel' );
		var unstyledHeroModel = panel.FindChildTraverse( 'GenericArcanaModelUnstyled' );

		if ( typeof this.data.player_slot !== 'undefined' )
		{
			// Use this normally when viewing the details
			if ( heroModel ) { heroModel.SetScenePanelToPlayerHero( this.data.match_id, this.data.player_slot ); }
			if ( unstyledHeroModel ) { unstyledHeroModel.SetScenePanelToPlayerHero( this.data.match_id, this.data.player_slot ); }
		}
		else
		{
			// Use this for testing when we don't actually have match data
			if ( heroModel ) { heroModel.SetScenePanelToLocalHero( this.data.hero_id ); }
			if ( heroModel ) { unstyledHeroModel.SetScenePanelToLocalHero( this.data.hero_id ); }
		}

		var heroIcon = panel.FindChildTraverse( 'GenericArcanaHeroIcon' );
		if ( heroIcon && !heroIcon.style.backgroundImage )
		{
			var sIconFile = ( "file://{images}/heroes/icons/" + heroName + "_alt1.png" );
			heroIcon.style.backgroundImage = 'url("' + sIconFile + '")';
		}


		//unstyledHeroModel.SetHeroRotation( -1.5 );
		//unstyledHeroModel.MarkSceneDirty();

		// set up the hero model to use all of the items in the arcana bundle with the shown style
		var bundleItems = this.data.arcana_progress.arcana_bundle_items;
		var bundleSlots = this.data.arcana_progress.arcana_bundle_slots;
		var styleIndex = this.data.arcana_progress.style_index;
		for ( var i = 0; i < bundleItems.length; ++i )
		{
			if ( heroModel ) { heroModel.ReplaceEconItemSlot( bundleSlots[i], bundleItems[i], styleIndex ); }
		}

		var progress = panel.FindChildTraverse( 'GenericArcanaProgressMain' );

		panel.SetDialogVariable( 'arcana_progress_max_score', this.data.arcana_progress.arcana_max_score );

		var nFlawlessScore = 3;
		if ( bFlawlessVictory )
		{
			panel.SetDialogVariable( 'arcana_progress_flawless_increment', nFlawlessScore );
			incrementScore = incrementScore - nFlawlessScore;
		}

		panel.SetHasClass( "OnlyFlawlessVictory", incrementScore == 0 );

		// handle fractional scores
		if ( incrementScore === Math.floor( incrementScore ) )
		{
			panel.SetDialogVariable( 'arcana_progress_increment', incrementScore );
		}
		else
		{
			panel.SetDialogVariable( 'arcana_progress_increment', Math.floor( incrementScore * 10 ) / 10.0 );
		}

		if ( startScore === Math.floor( startScore ) )
		{
			panel.SetDialogVariable( 'arcana_progress_current_score', startScore );
		}
		else
		{
			panel.SetDialogVariable( 'arcana_progress_current_score', Math.floor( startScore * 10 ) / 10.0 );
		}

		var sHeaderLoc = "#DOTA_ArcanaProgress_Header_" + heroName;
		var sTitleLoc = "#DOTA_ArcanaProgress_Title_" + heroName;
		var sDescriptionLoc = "#DOTA_ArcanaProgress_Description_" + heroName;
		var sProgressBarLoc = "#DOTA_ArcanaProgress_ProgressBar_" + heroName;
		var sIncrementLoc = "#DOTA_ArcanaProgress_Increment_" + heroName;

		var sHeader = $.Localize( sHeaderLoc, panel );
		var sTitle = $.Localize( sTitleLoc, panel );
		var sDescription = $.Localize( sDescriptionLoc, panel );
		var sProgressBar = $.Localize( sProgressBarLoc, panel );
		var sIncrement = $.Localize( sIncrementLoc, panel );

		if ( sHeader == sHeaderLoc ) { sHeader = $.Localize( "#DOTA_ArcanaProgress_Header_generic", panel ); }
		if ( sTitle == sTitleLoc ) { sTitle = $.Localize( "#DOTA_ArcanaProgress_Title_generic", panel ); }
		if ( sDescription == sDescriptionLoc ) { sDescription = $.Localize( "#DOTA_ArcanaProgress_Description_generic", panel ); }
		if ( sProgressBar == sProgressBarLoc ) { sProgressBar = $.Localize( "#DOTA_ArcanaProgress_ProgressBar_generic", panel ); }
		if ( sIncrement == sIncrementLoc ) { sIncrement = $.Localize( "#DOTA_ArcanaProgress_Increment_generic", panel ); }

		panel.SetDialogVariable( "arcana_progress_header", sHeader );
		panel.SetDialogVariable( "arcana_progress_title", sTitle );
		panel.SetDialogVariable( "arcana_progress_description", sDescription );
		panel.SetDialogVariable( "arcana_progress_bar", sProgressBar );
		panel.SetDialogVariable( "arcana_progress_increment", sIncrement );

		var progressBar = panel.FindChildTraverse( 'GenericArcanaProgressBar' );
		progressBar.min = 0;
		progressBar.max = this.data.arcana_progress.arcana_max_score;
		progressBar.value = startScore;

		// Setup the sequence of actions to animate the screen
		var sndStinger = $.Localize( "#DOTA_ArcanaProgress_Stinger_" + heroName, panel );
		if ( sndStinger )
		{
			this.actions.push( new RunFunctionAction( function() { $.DispatchEvent( 'PlaySoundEffect', sndStinger ); } ) );
		}

		this.actions.push( new AddClassAction( panel, 'ShowScreen' ) );
		this.actions.push( new StopSkippingAheadAction() );
		this.actions.push( new SkippableAction( new WaitAction( 0.5 ) ) );
		//this.actions.push( new AddScreenLinkAction( panel, 'GenericArcanaProgress', '#DOTA_PostGame_GenericArcanaProgress' ) );

		this.actions.push( new RunFunctionAction( function()
		{
			var link = AddScreenLink( panel, 'GenericArcanaProgress', '#DOTA_PostGame_GenericArcanaProgress' );
			if ( !link.style.backgroundImage )
			{
				var sIconFile = ( "file://{images}/heroes/icons/" + heroName + "_alt1.png" );
				link.style.backgroundImage = 'url("' + sIconFile + '")';
			}
			link.AddClass( heroName );
		} ) );

		this.actions.push( new ActionWithTimeout( new WaitForClassAction( heroModel, 'SceneLoaded' ), 3.0 ) );
		this.actions.push( new SkippableAction( new WaitAction( 0.5 ) ) );
		this.actions.push( new AddClassAction( panel, 'ShowProgress' ) );
		this.actions.push( new SkippableAction( new WaitAction( 1.5 ) ) );

		this.actions.push( new RunFunctionAction( function()
		{
			panel.TriggerClass( "PulseScore" );
			panel.AddClass( "ProgressComplete" );
			//$.DispatchEvent('PlaySoundEffect', 'wraith_king_arcana_postgame_stinger'); 
		} ) );

		this.actions.push( new WaitAction( 0.35 ) );

		this.actions.push( new AnimateProgressBarAction( progressBar, startScore, endScore, 0.1 ) );

		this.actions.push( new RunFunctionAction( function()
		{
			if ( endScore === Math.floor( endScore ) )
			{
				panel.SetDialogVariable( 'arcana_progress_current_score', endScore );
			}
			else
			{
				panel.SetDialogVariable( 'arcana_progress_current_score', Math.floor( endScore * 10 ) / 10.0 );
			}

			sProgressBar = $.Localize( sProgressBarLoc, panel );
			if ( sProgressBar == sProgressBarLoc ) { sProgressBar = $.Localize( "#DOTA_ArcanaProgress_ProgressBar_generic", panel ); }
			panel.SetDialogVariable( "arcana_progress_bar", sProgressBar );
		} ) );

		this.actions.push( new SkippableAction( new WaitAction( 3 ) ) );
		this.actions.push( new StopSkippingAheadAction() );
		this.actions.push( new SwitchClassAction( panel, 'current_screen', '' ) );
		this.actions.push( new SkippableAction( new WaitAction( 0.5 ) ) );

		super.start();
	}
}

//------------------ END DROW RANGER ARCANA PROGRESS ------------------------





// Rubick Arcana

class AnimateRubickArcanaScreenAction extends RunSequentialActions
{
	constructor( data )
	{
		super();
		this.data = data;
	}

	start()
	{
		var heroID = this.data.hero_id;

		// Create the screen and do a bunch of initial setup
		var panel = StartNewScreen( 'RubickArcanaProgressScreen' );
		panel.BLoadLayoutSnippet( "RubickArcanaProgress" );

		var heroModel = panel.FindChildInLayoutFile( 'RubickArcanaModel' );
		if ( typeof this.data.player_slot !== 'undefined' )
		{
			// Use this normally when viewing the details
			heroModel.SetScenePanelToPlayerHero( this.data.match_id, this.data.player_slot );
		}
		else
		{
			// Use this for testing when we don't actually have match data
			heroModel.SetScenePanelToLocalHero( this.data.hero_id );
		}

		var progress = panel.FindChildInLayoutFile( 'RubickArcanaProgress' );
		progress.current_score = this.data.rubick_arcana_progress.arcana_start_score;
		progress.ScrollToCurrentScore();

		var endScore = this.data.rubick_arcana_progress.arcana_end_score;

		// Setup the sequence of actions to animate the screen
		this.actions.push( new AddClassAction( panel, 'ShowScreen' ) );
		this.actions.push( new SkippableAction( new WaitAction( 0.5 ) ) );
		this.actions.push( new AddScreenLinkAction( panel, 'RubickArcanaProgress', '#DOTA_PlusPostGame_RubickArcanaProgress' ) );
		this.actions.push( new ActionWithTimeout( new WaitForClassAction( heroModel, 'SceneLoaded' ), 3.0 ) );
		this.actions.push( new SkippableAction( new WaitAction( 0.5 ) ) );
		this.actions.push( new AddClassAction( panel, 'ShowProgress' ) );
		this.actions.push( new SkippableAction( new WaitAction( 1.5 ) ) );
		this.actions.push( new RunFunctionAction( function()
		{
			progress.current_score = endScore;
			progress.ScrollToCurrentScore();
			progress.TriggerClass( 'PulseScore' );
		} ) );
		this.actions.push( new StopSkippingAheadAction() );
		this.actions.push( new SkippableAction( new WaitAction( 5 ) ) );
		this.actions.push( new SwitchClassAction( panel, 'current_screen', '' ) );
		this.actions.push( new SkippableAction( new WaitAction( 0.5 ) ) );

		super.start();
	}
}

// Wraith King Arcana

class AnimateWraithKingArcanaScreenAction extends RunSequentialActions
{
	constructor( data )
	{
		super();
		this.data = data;
	}

	start()
	{
		var heroID = this.data.hero_id;

		// Create the screen and do a bunch of initial setup
		var panel = StartNewScreen( 'WraithKingArcanaProgressScreen' );
		panel.BLoadLayoutSnippet( "WraithKingArcanaProgress" );

		panel.RemoveClass( 'ShowProgress' );
		panel.AddClass( 'ShowScreen' );

		var wraithKingPanel = panel.FindChildInLayoutFile( 'WraithKingArcanaProgress' );
		var heroesKilled = this.data.wraith_king_arcana_progress.heroes_killed;
		var previousHeroesKilledMask = this.data.wraith_king_arcana_progress.previous_heroes_killed_mask;
		wraithKingPanel.Reset();
		wraithKingPanel.RemoveClass( 'ShowProgressSection' );

		// Setup the sequence of actions to animate the screen
		this.actions.push( new SkippableAction( new WaitAction( 0.1 ) ) );
		this.actions.push( new SkippableAction( new WaitForClassAction( wraithKingPanel, 'BackgroundImageLoaded' ) ) );
		this.actions.push( new SkippableAction( new WaitAction( 0.2 ) ) );
		this.actions.push( new AddClassAction( panel, 'ShowProgress' ) );
		this.actions.push( new SkippableAction( new WaitAction( 0.2 ) ) );
		this.actions.push( new RunFunctionAction( function()
		{
			wraithKingPanel.ClearPreviousHeroKilledMask();
			for ( var i = 0; i < previousHeroesKilledMask.length; ++i )
			{
				wraithKingPanel.AppendPreviousHeroKilledMask( previousHeroesKilledMask[i] );
			}
			wraithKingPanel.ShowPostGameProgress();
		} ) );
		this.actions.push( new RunFunctionAction( function() { $.DispatchEvent( 'PlaySoundEffect', 'wraith_king_arcana_postgame_stinger' ); } ) );
		this.actions.push( new AddScreenLinkAction( panel, 'WraithKingArcanaProgress', '#DOTA_PostGame_WraithKingArcanaProgress' ) );
		this.actions.push( new SkippableAction( new WaitAction( 1.0 ) ) );
		this.actions.push( new RunFunctionAction( function() { $.DispatchEvent( 'PlaySoundEffect', 'wraith_king_arcana_postgame_vo' ); } ) );
		this.actions.push( new SkippableAction( new AddClassAction( panel, 'HasHeroFocus' ) ) );

		for ( var i = 0; i < heroesKilled.length; ++i )
		{
			( function( me, heroIdKilled )
			{
				if ( heroesKilled.length > 1 )
				{
					me.actions.push( new AddClassAction( wraithKingPanel, 'ShowProgressSection' ) );
				}

				wraithKingPanel.SetHasClass( 'MultipleHeroesKilled', heroesKilled.length > 1 );

				me.actions.push( new SkippableAction( new RunFunctionAction( function()
				{
					wraithKingPanel.SetDialogVariableInt( 'killed_hero_id', heroIdKilled );
					wraithKingPanel.CenterOnHero( heroIdKilled );
				} ) ) );
				me.actions.push( new SkippableAction( new WaitAction( 1.3 ) ) );
				me.actions.push( new SkippableAction( new RunFunctionAction( function()
				{
					$.DispatchEvent( 'PlaySoundEffect', 'wraith_king_arcana_postgame_sfx' );
				} ) ) );
				me.actions.push( new RunFunctionAction( function()
				{
					wraithKingPanel.FillInHero( heroIdKilled );
				} ) );
				me.actions.push( new SkippableAction( new WaitAction( 1.0 ) ) );

			} )( this, heroesKilled[i] );
		}

		this.actions.push( new AddClassAction( panel, 'ShowFinalDetails' ) );
		this.actions.push( new SkippableAction( new WaitForClassAction( wraithKingPanel, 'OnReadyToContinue' ) ) );
		this.actions.push( new StopSkippingAheadAction() );
		this.actions.push( new SkippableAction( new WaitAction( 1.5 ) ) );
		this.actions.push( new SwitchClassAction( panel, 'current_screen', '' ) );
		this.actions.push( new SkippableAction( new WaitAction( 0.5 ) ) );

		super.start();
	}
}



// Generic Arcana Progress

class AnimateGenericArcanaScreenAction extends RunSequentialActions
{
	constructor( data )
	{
		super();
		this.data = data;
	}

	start()
	{
		var heroID = this.data.hero_id;
		var heroName = this.data.arcana_progress.arcana_hero_name;
		var startScore = this.data.arcana_progress.arcana_start_score;
		var endScore = this.data.arcana_progress.arcana_end_score;
		var incrementScore = endScore - startScore;

		// Create the screen and do a bunch of initial setup
		var panel = StartNewScreen( 'GenericArcanaProgressScreen' );
		if ( panel.BHasLayoutSnippet( "ArcanaProgress_" + heroName ) )
		{
			panel.BLoadLayoutSnippet( "ArcanaProgress_" + heroName );
		}
		else
		{
			panel.BLoadLayoutSnippet( "GenericArcanaProgress" );
		}

		panel.AddClass( heroName );

		panel.SetDialogVariableLocString( 'killeater_type_name', this.data.arcana_progress.killeater_type_name );

		var heroModel = panel.FindChildTraverse( 'GenericArcanaModel' );
		var unstyledHeroModel = panel.FindChildTraverse( 'GenericArcanaModelUnstyled' );

		if ( typeof this.data.player_slot !== 'undefined' )
		{
			// Use this normally when viewing the details
			if ( heroModel ) { heroModel.SetScenePanelToPlayerHero( this.data.match_id, this.data.player_slot ); }
			if ( unstyledHeroModel ) { unstyledHeroModel.SetScenePanelToPlayerHero( this.data.match_id, this.data.player_slot ); }
		}
		else
		{
			// Use this for testing when we don't actually have match data
			if ( heroModel ) { heroModel.SetScenePanelToLocalHero( this.data.hero_id ); }
			if ( heroModel ) { unstyledHeroModel.SetScenePanelToLocalHero( this.data.hero_id ); }
		}

		var heroIcon = panel.FindChildTraverse( 'GenericArcanaHeroIcon' );
		if ( heroIcon && !heroIcon.style.backgroundImage )
		{
			var sIconFile = ( "file://{images}/heroes/icons/" + heroName + "_alt1.png" );
			heroIcon.style.backgroundImage = 'url("' + sIconFile + '")';
		}


		//unstyledHeroModel.SetHeroRotation( -1.5 );
		//unstyledHeroModel.MarkSceneDirty();

		// set up the hero model to use all of the items in the arcana bundle with the shown style
		var bundleItems = this.data.arcana_progress.arcana_bundle_items;
		var bundleSlots = this.data.arcana_progress.arcana_bundle_slots;
		var styleIndex = this.data.arcana_progress.style_index;
		for ( var i = 0; i < bundleItems.length; ++i )
		{
			if ( heroModel ) { heroModel.ReplaceEconItemSlot( bundleSlots[i], bundleItems[i], styleIndex ); }
		}

		var progress = panel.FindChildTraverse( 'GenericArcanaProgressMain' );

		panel.SetDialogVariable( 'arcana_progress_max_score', this.data.arcana_progress.arcana_max_score );

		// handle fractional scores
		if ( incrementScore === Math.floor( incrementScore ) )
		{
			panel.SetDialogVariable( 'arcana_progress_increment', incrementScore );
		}
		else
		{
			panel.SetDialogVariable( 'arcana_progress_increment', Math.floor( incrementScore * 10 ) / 10.0 );
		}

		if ( startScore === Math.floor( startScore ) )
		{
			panel.SetDialogVariable( 'arcana_progress_current_score', startScore );
		}
		else
		{
			panel.SetDialogVariable( 'arcana_progress_current_score', Math.floor( startScore * 10 ) / 10.0 );
		}

		var sHeaderLoc = "#DOTA_ArcanaProgress_Header_" + heroName;
		var sTitleLoc = "#DOTA_ArcanaProgress_Title_" + heroName;
		var sDescriptionLoc = "#DOTA_ArcanaProgress_Description_" + heroName;
		var sProgressBarLoc = "#DOTA_ArcanaProgress_ProgressBar_" + heroName;
		var sIncrementLoc = "#DOTA_ArcanaProgress_Increment_" + heroName;

		var sHeader = $.Localize( sHeaderLoc, panel );
		var sTitle = $.Localize( sTitleLoc, panel );
		var sDescription = $.Localize( sDescriptionLoc, panel );
		var sProgressBar = $.Localize( sProgressBarLoc, panel );
		var sIncrement = $.Localize( sIncrementLoc, panel );

		if ( sHeader == sHeaderLoc ) { sHeader = $.Localize( "#DOTA_ArcanaProgress_Header_generic", panel ); }
		if ( sTitle == sTitleLoc ) { sTitle = $.Localize( "#DOTA_ArcanaProgress_Title_generic", panel ); }
		if ( sDescription == sDescriptionLoc ) { sDescription = $.Localize( "#DOTA_ArcanaProgress_Description_generic", panel ); }
		if ( sProgressBar == sProgressBarLoc ) { sProgressBar = $.Localize( "#DOTA_ArcanaProgress_ProgressBar_generic", panel ); }
		if ( sIncrement == sIncrementLoc ) { sIncrement = $.Localize( "#DOTA_ArcanaProgress_Increment_generic", panel ); }

		panel.SetDialogVariable( "arcana_progress_header", sHeader );
		panel.SetDialogVariable( "arcana_progress_title", sTitle );
		panel.SetDialogVariable( "arcana_progress_description", sDescription );
		panel.SetDialogVariable( "arcana_progress_bar", sProgressBar );
		panel.SetDialogVariable( "arcana_progress_increment", sIncrement );

		var progressBar = panel.FindChildTraverse( 'GenericArcanaProgressBar' );
		progressBar.min = 0;
		progressBar.max = this.data.arcana_progress.arcana_max_score;
		progressBar.value = startScore;

		// Setup the sequence of actions to animate the screen
		var sndStinger = $.Localize( "#DOTA_ArcanaProgress_Stinger_" + heroName, panel );
		if ( sndStinger )
		{
			this.actions.push( new RunFunctionAction( function() { $.DispatchEvent( 'PlaySoundEffect', sndStinger ); } ) );
		}

		this.actions.push( new AddClassAction( panel, 'ShowScreen' ) );
		this.actions.push( new StopSkippingAheadAction() );
		this.actions.push( new SkippableAction( new WaitAction( 0.5 ) ) );
		//this.actions.push( new AddScreenLinkAction( panel, 'GenericArcanaProgress', '#DOTA_PostGame_GenericArcanaProgress' ) );

		this.actions.push( new RunFunctionAction( function()
		{
			var link = AddScreenLink( panel, 'GenericArcanaProgress', '#DOTA_PostGame_GenericArcanaProgress' );
			if ( !link.style.backgroundImage )
			{
				var sIconFile = ( "file://{images}/heroes/icons/" + heroName + "_alt1.png" );
				link.style.backgroundImage = 'url("' + sIconFile + '")';
			}
			link.AddClass( heroName );
		} ) );

		this.actions.push( new ActionWithTimeout( new WaitForClassAction( heroModel, 'SceneLoaded' ), 3.0 ) );
		this.actions.push( new SkippableAction( new WaitAction( 0.5 ) ) );
		this.actions.push( new AddClassAction( panel, 'ShowProgress' ) );
		this.actions.push( new SkippableAction( new WaitAction( 1.5 ) ) );

		this.actions.push( new RunFunctionAction( function()
		{
			panel.TriggerClass( "PulseScore" );
			panel.AddClass( "ProgressComplete" );
			//$.DispatchEvent('PlaySoundEffect', 'wraith_king_arcana_postgame_stinger'); 
		} ) );

		this.actions.push( new WaitAction( 0.35 ) );

		this.actions.push( new AnimateProgressBarAction( progressBar, startScore, endScore, 0.1 ) );

		this.actions.push( new RunFunctionAction( function()
		{
			if ( endScore === Math.floor( endScore ) )
			{
				panel.SetDialogVariable( 'arcana_progress_current_score', endScore );
			}
			else
			{
				panel.SetDialogVariable( 'arcana_progress_current_score', Math.floor( endScore * 10 ) / 10.0 );
			}

			sProgressBar = $.Localize( sProgressBarLoc, panel );
			if ( sProgressBar == sProgressBarLoc ) { sProgressBar = $.Localize( "#DOTA_ArcanaProgress_ProgressBar_generic", panel ); }
			panel.SetDialogVariable( "arcana_progress_bar", sProgressBar );
		} ) );

		this.actions.push( new SkippableAction( new WaitAction( 3 ) ) );
		this.actions.push( new StopSkippingAheadAction() );
		this.actions.push( new SwitchClassAction( panel, 'current_screen', '' ) );
		this.actions.push( new SkippableAction( new WaitAction( 0.5 ) ) );

		super.start();
	}
}



var TestAnimateEarthshakerArcanaProgress = function()
{
	var data =
	{
		hero_id: 7,

		arcana_progress:
		{
			hero_id: 7,
			kills: 6,
			deaths: 7,
			assists: 8,

			arcana_hero_name: "Earthshaker",

			arcana_owner_item_def_index: 12692,
			arcana_gem_item_def_index: 3023,
			arcana_bundle_def_index: 0,

			killeater_type_name: "KillEaterEventType_Earthshaker_Arcana_EchoSlamDamageLeadingToKills",

			arcana_start_score: 23,
			arcana_end_score: 88,
			arcana_max_score: 150,
			style_index: 1,
			arcana_bundle_items: [],
			arcana_bundle_slots: []

		}
	};

	TestProgressAnimation( data );
};