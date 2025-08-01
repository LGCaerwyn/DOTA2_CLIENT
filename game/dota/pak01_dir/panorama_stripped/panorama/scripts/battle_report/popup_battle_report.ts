/// <reference path="battle_report_shared.ts" />

                  
function AnimateIntro(): void
{
    const seq = new RunSequentialActions();
    const popup = $.GetContextPanel();
    
    seq.actions.push( new AddClassAction( popup, 'IntroPlaying' ) );
    seq.actions.push( new PlaySoundEffectAction( "BattleReport.IntroStinger" ) );
    seq.actions.push(new SkippableReportAction( new WaitAction( 1.0 ) ) );
    const movieTrack = new RunSequentialActions();
    movieTrack.actions.push( new AddClassAction( popup, 'ShowLogoMovie' ) );
    movieTrack.actions.push( new PlayMovieAction( $( '#LogoMovie' ) ) );
    const uiTrack = new RunSequentialActions();
    uiTrack.actions.push(new SkippableReportAction( new WaitAction( 0.4 ) ) );
    uiTrack.actions.push( new AddClassAction( popup, 'ShowIntroTitle' ) );
    uiTrack.actions.push(new SkippableReportAction( new WaitAction( 0.1 ) ) );
    uiTrack.actions.push( new AddClassAction( popup, 'ShowIntroDate' ) );
    uiTrack.actions.push(new SkippableReportAction( new WaitAction( 2.0 ) ) );
    uiTrack.actions.push( new PlaySoundEffectAction( "BattleReport.IntroSound" ) );
    const par = new RunParallelActions();
    par.actions.push( movieTrack );
    par.actions.push( uiTrack );
    seq.actions.push( par );
    seq.actions.push( new RemoveClassAction( popup, 'IntroPlaying' ) );
    seq.actions.push(new AddClassAction(popup, 'IntroComplete'));
    seq.actions.push(new StopSkippingReportAheadAction());
    seq.actions.push(new DispatchEventAction('DOTABattleReportSetActiveScreen', 0));
    RunSingleAction( seq );
}