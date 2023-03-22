//@ts-check
/// <reference path="../../../core/panorama/scripts/panorama.d.ts" />
/// <reference path="dota.d.ts" />

/**
 * @typedef {object} CDOTA_DB_Background_BP_Fall2021_ObjectTemplate
 * @property {(sAction?: string) => number} RequestActionScoreByName
 * @property {() => boolean} HasEventData
 */

/**
 * @returns {Panel & CDOTA_DB_Background_BP_Fall2021_ObjectTemplate}
 */
 function GetFall2021Panel()
 {
	 //@ts-ignore
	 return $.GetContextPanel();
 }

const EVENT_ID_FALL_2021 = 33;
var g_bDetailsVisible = false;

/** @type {Array<{ entityName: string; customSounds?: string[]; unlockAction?: string; speechChoice?: string }>} */
const k_modelInfos = 
[
	{	// Default Aghs
		entityName : "aghanim_01"
	},
	{	// Beastmaster Aghs
		entityName : "aghanim_02",
		unlockAction : "aghs_model_unlocked_beastmaster",
		speechChoice : "#DOTA_Aghanim_FrontPageSpeech1"
	},
	{	// Bubble Bath Aghs
		entityName : "aghanim_03",
		unlockAction : "aghs_model_unlocked_bubble_bath",
		speechChoice : "#DOTA_Aghanim_FrontPageSpeech2"
	},
	{	// Mechanic Aghs
		entityName : "aghanim_04",
		customSounds : [ "Aghanim.LotsOfHobbies" ],
		unlockAction : "aghs_model_unlocked_mechanic",
		speechChoice : "#DOTA_Aghanim_FrontPageSpeech3"
	},
	{	// Bucket Aghs
		entityName : "aghanim_05",
		customSounds : [ "Aghanim.BucketEntrance" ],
		unlockAction : "aghs_model_unlocked_bucket",
		speechChoice : "#DOTA_Aghanim_FrontPageSpeech4"
	},
	{	// Bro Aghs
		entityName : "aghanim_06",
		customSounds : [ "Aghanim.BroEntrance" ],
		unlockAction : "aghs_model_unlocked_bro",
		speechChoice : "#DOTA_Aghanim_FrontPageSpeech5"
	},
	{	// Goat Aghs
		entityName : "aghanim_07",
		customSounds : [ "Aghanim.GoatEntrance" ],
		unlockAction : "aghs_model_unlocked_goat",
		speechChoice : "#DOTA_Aghanim_FrontPageSpeech6"
	},
	{	// Mad Max Aghs
		entityName : "aghanim_08",
		unlockAction : "aghs_model_unlocked_mad_max",
		speechChoice : "#DOTA_Aghanim_FrontPageSpeech7"
	},
	{	// Future Aghs
		entityName : "aghanim_09",
		customSounds : [ "Aghanim.MechEntrance" ],
		unlockAction : "aghs_model_unlocked_future",
		speechChoice : "#DOTA_Aghanim_FrontPageSpeech8"
	},
	{	// Roshan Aghs
		entityName : "aghanim_10",
		unlockAction : "aghs_model_unlocked_roshan",
		speechChoice : "#DOTA_Aghanim_FrontPageSpeech9"
	},
	{	// Courier Aghs
		entityName : "aghanim_11",
		unlockAction : "aghs_model_unlocked_courier",
		speechChoice : "#DOTA_Aghanim_FrontPageSpeech10"
	},
];

const k_genericSounds = 
[
	"Aghanim.BingBong_01",
	"Aghanim.BingBong_02",
	"Aghanim.BingBong_03",
	"Aghanim.BoopityBop_01",
	"Aghanim.BoopityBop_02",
	"Aghanim.BoopityBop_03",
	"Aghanim.Booyah",
	"Aghanim.CheckOutTheHustle",
	"Aghanim.CheckOutThisGuy",
	"Aghanim.FlickOfTheWrist",
	"Aghanim.Hiyahh_01",
	"Aghanim.Hiyahh_02",
	"Aghanim.Hiyahh_03",
	"Aghanim.Hiyahh_04",
	"Aghanim.LookWhoItIs",
	"Aghanim.Shazaam",
	"Aghanim.SmallBusinessOwner",
];

/**
 * @param {number} nIndex 
 * @returns {boolean}
 */
var IsModelUnlocked = function( nIndex )
{
	if ( nIndex < 0 || nIndex >= k_modelInfos.length )
		return false;

	if ( k_modelInfos[ nIndex ].unlockAction == undefined )
		return true;

	return GetFall2021Panel().RequestActionScoreByName( k_modelInfos[ nIndex ].unlockAction ) > 0;
}

var UpdateUnlockIcons = function()
{
	/** @type {Panel} */
	var unlockIcons = $( '#UnlockIcons' );
	for ( var i = 0; i < unlockIcons.GetChildCount() && i < k_modelInfos.length; ++i )
	{
		var unlockIcon = unlockIcons.GetChild( i );
		if ( unlockIcon )
		{
			unlockIcon.SetHasClass( 'ModelUnlocked', IsModelUnlocked( i ) );
			unlockIcon.checked = ( i == g_nCurrentModelIndex );
		}
	}
}

$.Schedule( 0.0, function()
{
	/** @type {Panel} */
	var unlockIcons = $( '#UnlockIcons' );
	unlockIcons.RemoveAndDeleteChildren();

	for ( var i = 0; i < k_modelInfos.length; ++i )
	{
		var unlockIcon = $.CreatePanel( 'Panel', unlockIcons, 'UnlockIcon' + i );
		unlockIcon.BLoadLayoutSnippet( 'UnlockIcon' );
		unlockIcon.SetPanelEvent( 'onactivate', function ( nIndex ) { return function () { ActivateModel( nIndex ) } }( i ) );
	}  

	UpdateUnlockIcons();
} );

var UpdateSelectedModelUnlocked = function()
{
	GetFall2021Panel().SetHasClass( 'SelectedModelUnlocked', IsModelUnlocked( g_nCurrentModelIndex ) );
}

var g_nCurrentModelIndex = -1;
var g_nSoundCookie = 0;
var g_bPlayingVoiceoverSound = false;

/**
 * @param {number} nModelIndex
 * @param {boolean} bPlaySound
 */
var SetCurrentModel = function( nModelIndex, bPlaySound )
{
	// $.Msg( 'SetCurrentModel ' + nModelIndex + " " + bPlaySound );
	if ( g_nCurrentModelIndex == nModelIndex )
		return;

	g_nCurrentModelIndex = nModelIndex;

	/** @type {DOTAScenePanel} */
	var aghanimModel = $( '#AghanimModel' );

	for ( var i = 0; i < k_modelInfos.length; ++i )
	{
		if( i === g_nCurrentModelIndex )
		{
			aghanimModel.FireEntityInput( k_modelInfos[ i ].entityName, "TurnOn", '' );
			//$.Msg("Turning on " + k_modelInfos[ i ].entityName );
			if (i == 4) //bucket
			{
				aghanimModel.FireEntityInput( "aghanim_05_stool", "TurnOn", '' );
			}

			aghanimModel.SetHasClass( 'CourierShown', i == 10 );
		}
		else
		{
			aghanimModel.FireEntityInput(  k_modelInfos[ i ].entityName, "TurnOff", '' );
			//$.Msg("Turning off " +  k_modelInfos[ i ].entityName );
			if (i == 4)
			{
				aghanimModel.FireEntityInput( "aghanim_05_stool", "TurnOff", '' );
			}
		}
	}

	UpdateUnlockIcons();
	UpdateSelectedModelUnlocked();

	if ( bPlaySound )
	{
		// Always play the continuum device sound
		PlayUISoundScript( "ContinuumDevice.Activate" );

		if ( IsModelUnlocked( g_nCurrentModelIndex ) )
		{
		
			g_nSoundCookie = g_nSoundCookie + 1;

			// Wait one second in case they're spam clicking, then try to play a voiceover sound
			$.Schedule( 0.8, ( function( nCookie )
			{
				return function()
				{
					if ( nCookie != g_nSoundCookie )
						return;

					if ( g_bPlayingVoiceoverSound )
						return;

					// Choose from the generic sounds or if this model has something specific.
					var soundOptions = k_genericSounds;
					var modelInfo = k_modelInfos[ g_nCurrentModelIndex ];
					if ( modelInfo.customSounds )
					{
						soundOptions = soundOptions.concat( modelInfo.customSounds );
					}
			
					var nIndex = Math.floor( Math.random() * soundOptions.length );
					var voSound = soundOptions[ nIndex ];
			
					g_bPlayingVoiceoverSound = true;
			
					var seq = new RunSequentialActions();
					seq.actions.push( new PlaySoundUntilFinishedAction( voSound ) );
					seq.actions.push( new RunFunctionAction( function() { g_bPlayingVoiceoverSound = false; } ) );
					RunSingleAction( seq );

				};
			} )( g_nSoundCookie ) );
		}
	}
}

/**
 * @param {number} nIndex 
 */
var ActivateModel = function ( nIndex )
{
	/** @type {DOTAScenePanel} */
	var aghanimModel = $( '#AghanimModel' );
	/** @type {DOTAParticleScenePanel} */
	var deviceModel = $( '#DeviceModel' );
	/** @type {Panel} */
	var ModelContainer = $( '#BackgroundModelsRef' );
	/** @type {Label} */
	var ModelHelp = $( '#ModelHelp' );

	deviceModel.SetAnimgraphParameterOnEntityInt( 'conundrum', 'mouseover', 2 );
	deviceModel.FireEntityInput( 'device_active_fx', 'stop', 0 );
	deviceModel.FireEntityInput( 'device_active_fx', 'start', 0 );
	deviceModel.FireEntityInput( 'device_spin_fx', 'stop', 0 );
	aghanimModel.FireEntityInput( 'device_spin_fx', 'stop', 0 );

	var speechChoice = k_modelInfos[ nIndex ].speechChoice;
	if ( speechChoice )
	{
		ModelContainer.RemoveClass( "HelpMe" );
		$.Schedule( 0.1, function () { ModelContainer.AddClass( "HelpMe" ); } );
		ModelHelp.SetLocString( speechChoice );
	}

	SetCurrentModel( nIndex, true );
}

var MaybeUpdateInitalModel = function()
{
	if ( g_nCurrentModelIndex != -1 )
		return;

	if ( !GetFall2021Panel().HasEventData() )
		return;

	/** @type {DOTAScenePanel} */
	var aghanimModel = $( '#AghanimModel' );
	if ( !aghanimModel.BHasClass( 'SceneLoaded' ) )
		return;

	var possibleModelIndices = [];
	for ( var i = 0; i < k_modelInfos.length; ++i )
	{
		if ( IsModelUnlocked( i ) )
		{
			possibleModelIndices.push( i );
		}
	}

	if ( possibleModelIndices.length == 0 )
	{
		$.Msg( "Error, no unlocked models?" );
		return;
	}

	var nSelectedIndex = Math.floor( Math.random() * possibleModelIndices.length );
	SetCurrentModel( possibleModelIndices[ nSelectedIndex ], false );

	aghanimModel.AddClass( 'Initialized' );
}

$.RegisterEventHandler( 'DOTAScenePanelSceneUnloaded', $( '#AghanimModel' ), function()
{
	g_nCurrentModelIndex = -1;

	/** @type {DOTAScenePanel} */
	var aghanimModel = $( '#AghanimModel' );
	aghanimModel.RemoveClass( 'Initialized' );
} );

$.RegisterEventHandler( 'DOTAScenePanelSceneLoaded', $( '#AghanimModel' ), function()
{
	// Need to do this the next frame, because adding the SceneLoaded
	// class happens after this event fires.
	$.Schedule( 0.0, function() {
		MaybeUpdateInitalModel();
	} );
} );

$.RegisterForUnhandledEvent( 'DOTAEventDataUpdated', function( eEvent )
{
	if ( eEvent != EVENT_ID_FALL_2021 )
		return false;

	MaybeUpdateInitalModel();
	UpdateUnlockIcons();
	UpdateSelectedModelUnlocked();

	return false;
} );



var OnAghanimDeviceMouseOver = function()
{
	//$.Msg("Aghanim Device MouseOver");

	/** @type {DOTAParticleScenePanel} */
	 var deviceModel = $( '#DeviceModel' );
	/** @type {DOTAScenePanel} */
	 var aghanimModel = $( '#AghanimModel' );

	 deviceModel.SetAnimgraphParameterOnEntityInt( 'conundrum', 'mouseover', 1 );
	 deviceModel.FireEntityInput( 'device_spin_fx', 'start', 0 );
	 aghanimModel.FireEntityInput( 'device_spin_fx', 'start', 0 );

	GetFall2021Panel().AddClass( 'DeviceMouseOver' );
}

var OnAghanimDeviceMouseOut = function()
{
	//$.Msg("Aghanim Device MouseOut");

	/** @type {DOTAScenePanel} */
	var aghanimModel = $( '#AghanimModel' );
	/** @type {DOTAParticleScenePanel} */
	var deviceModel = $( '#DeviceModel' );
	
	deviceModel.SetAnimgraphParameterOnEntityInt( 'conundrum', 'mouseover', 0 );
	deviceModel.FireEntityInput( 'device_active_fx', 'stop', 0 );
	deviceModel.FireEntityInput( 'device_spin_fx', 'stop', 0 );
	aghanimModel.FireEntityInput( 'device_spin_fx', 'stop', 0 );

	GetFall2021Panel().RemoveClass( 'DeviceMouseOver' );
}

var OnAghanimDeviceActivate = function()
{
	//$.Msg("Aghanim Device Activate " );
	ActivateModel( ( g_nCurrentModelIndex + 1 ) % k_modelInfos.length );
}

/**
 * @param {boolean} bVisible 
 */
var SetDetailsVisible = function( bVisible )
{
	GetFall2021Panel().SetHasClass( 'DetailsVisible', bVisible );
}

var ToggleDetailsVisible = function()
{
	//$.Msg("Details Clicked" );

	GetFall2021Panel().ToggleClass( 'DetailsVisible' );

	var aghanimModel = $( '#AghanimModel' );
	var deviceModel = $( '#DeviceModel' );
	
	g_bDetailsVisible = !g_bDetailsVisible;

	if ( g_bDetailsVisible ) 
	{
		$.DispatchEvent( 'DOTAGlobalSceneSetCameraEntity', 'AghanimModel', 'hero_camera_details', 0.8 ); 
		$.DispatchEvent( 'DOTAGlobalSceneSetCameraEntity', 'DeviceModel', 'hero_camera_device_details', 0.8 ); 
	}
	else
	{
		$.DispatchEvent( 'DOTAGlobalSceneSetCameraEntity', 'AghanimModel', 'hero_camera', 0.8 ); 
		$.DispatchEvent( 'DOTAGlobalSceneSetCameraEntity', 'DeviceModel', 'hero_camera', 0.8 ); 
	}
}


