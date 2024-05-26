// C++/WinRT v2.0.220110.5

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once
#ifndef WINRT_Windows_Media_Playback_0_H
#define WINRT_Windows_Media_Playback_0_H
WINRT_EXPORT namespace winrt::Windows::Devices::Enumeration
{
    struct DeviceInformation;
}
WINRT_EXPORT namespace winrt::Windows::Foundation
{
    struct Deferral;
    template <typename T> struct __declspec(empty_bases) EventHandler;
    struct EventRegistrationToken;
    struct HResult;
    template <typename T> struct __declspec(empty_bases) IReference;
    struct Rect;
    struct Size;
    template <typename TSender, typename TResult> struct __declspec(empty_bases) TypedEventHandler;
    struct Uri;
}
WINRT_EXPORT namespace winrt::Windows::Foundation::Collections
{
    template <typename T> struct __declspec(empty_bases) IIterable;
    template <typename T> struct __declspec(empty_bases) IObservableVector;
    struct IPropertySet;
    struct IVectorChangedEventArgs;
    template <typename T> struct __declspec(empty_bases) IVectorView;
    struct ValueSet;
}
WINRT_EXPORT namespace winrt::Windows::Foundation::Numerics
{
}
WINRT_EXPORT namespace winrt::Windows::Graphics::DirectX::Direct3D11
{
    struct IDirect3DSurface;
}
WINRT_EXPORT namespace winrt::Windows::Media
{
    enum class MediaPlaybackAutoRepeatMode : int32_t;
    enum class MediaPlaybackType : int32_t;
    struct MediaTimeRange;
    struct MediaTimelineController;
    struct MusicDisplayProperties;
    struct SystemMediaTransportControls;
    struct VideoDisplayProperties;
}
WINRT_EXPORT namespace winrt::Windows::Media::Audio
{
    struct AudioStateMonitor;
}
WINRT_EXPORT namespace winrt::Windows::Media::Casting
{
    struct CastingSource;
}
WINRT_EXPORT namespace winrt::Windows::Media::Core
{
    struct AudioTrack;
    struct IMediaSource;
    struct MediaSource;
    struct TimedMetadataTrack;
    struct VideoTrack;
}
WINRT_EXPORT namespace winrt::Windows::Media::MediaProperties
{
    enum class MediaRotation : int32_t;
    enum class SphericalVideoFrameFormat : int32_t;
    enum class StereoscopicVideoPackingMode : int32_t;
}
WINRT_EXPORT namespace winrt::Windows::Media::Protection
{
    struct MediaProtectionManager;
}
WINRT_EXPORT namespace winrt::Windows::Storage
{
    struct IStorageFile;
}
WINRT_EXPORT namespace winrt::Windows::Storage::Streams
{
    struct IRandomAccessStream;
    struct RandomAccessStreamReference;
}
WINRT_EXPORT namespace winrt::Windows::UI::Composition
{
    struct Compositor;
    struct ICompositionSurface;
}
WINRT_EXPORT namespace winrt::Windows::Media::Playback
{
    enum class AutoLoadedDisplayPropertyKind : int32_t
    {
        None = 0,
        MusicOrVideo = 1,
        Music = 2,
        Video = 3,
    };
    enum class FailedMediaStreamKind : int32_t
    {
        Unknown = 0,
        Audio = 1,
        Video = 2,
    };
    enum class MediaBreakInsertionMethod : int32_t
    {
        Interrupt = 0,
        Replace = 1,
    };
    enum class MediaCommandEnablingRule : int32_t
    {
        Auto = 0,
        Always = 1,
        Never = 2,
    };
    enum class MediaPlaybackItemChangedReason : int32_t
    {
        InitialItem = 0,
        EndOfStream = 1,
        Error = 2,
        AppRequested = 3,
    };
    enum class MediaPlaybackItemErrorCode : int32_t
    {
        None = 0,
        Aborted = 1,
        NetworkError = 2,
        DecodeError = 3,
        SourceNotSupportedError = 4,
        EncryptionError = 5,
    };
    enum class MediaPlaybackSessionVideoConstrictionReason : int32_t
    {
        None = 0,
        VirtualMachine = 1,
        UnsupportedDisplayAdapter = 2,
        UnsignedDriver = 3,
        FrameServerEnabled = 4,
        OutputProtectionFailed = 5,
        Unknown = 6,
    };
    enum class MediaPlaybackState : int32_t
    {
        None = 0,
        Opening = 1,
        Buffering = 2,
        Playing = 3,
        Paused = 4,
    };
    enum class MediaPlayerAudioCategory : int32_t
    {
        Other = 0,
        Communications = 3,
        Alerts = 4,
        SoundEffects = 5,
        GameEffects = 6,
        GameMedia = 7,
        GameChat = 8,
        Speech = 9,
        Movie = 10,
        Media = 11,
    };
    enum class MediaPlayerAudioDeviceType : int32_t
    {
        Console = 0,
        Multimedia = 1,
        Communications = 2,
    };
    enum class MediaPlayerError : int32_t
    {
        Unknown = 0,
        Aborted = 1,
        NetworkError = 2,
        DecodingError = 3,
        SourceNotSupported = 4,
    };
    enum class MediaPlayerState : int32_t
    {
        Closed = 0,
        Opening = 1,
        Buffering = 2,
        Playing = 3,
        Paused = 4,
        Stopped = 5,
    };
    enum class SphericalVideoProjectionMode : int32_t
    {
        Spherical = 0,
        Flat = 1,
    };
    enum class StereoscopicVideoRenderMode : int32_t
    {
        Mono = 0,
        Stereo = 1,
    };
    enum class TimedMetadataTrackPresentationMode : int32_t
    {
        Disabled = 0,
        Hidden = 1,
        ApplicationPresented = 2,
        PlatformPresented = 3,
    };
    struct IBackgroundMediaPlayerStatics;
    struct ICurrentMediaPlaybackItemChangedEventArgs;
    struct ICurrentMediaPlaybackItemChangedEventArgs2;
    struct IMediaBreak;
    struct IMediaBreakEndedEventArgs;
    struct IMediaBreakFactory;
    struct IMediaBreakManager;
    struct IMediaBreakSchedule;
    struct IMediaBreakSeekedOverEventArgs;
    struct IMediaBreakSkippedEventArgs;
    struct IMediaBreakStartedEventArgs;
    struct IMediaEnginePlaybackSource;
    struct IMediaItemDisplayProperties;
    struct IMediaPlaybackCommandManager;
    struct IMediaPlaybackCommandManagerAutoRepeatModeReceivedEventArgs;
    struct IMediaPlaybackCommandManagerCommandBehavior;
    struct IMediaPlaybackCommandManagerFastForwardReceivedEventArgs;
    struct IMediaPlaybackCommandManagerNextReceivedEventArgs;
    struct IMediaPlaybackCommandManagerPauseReceivedEventArgs;
    struct IMediaPlaybackCommandManagerPlayReceivedEventArgs;
    struct IMediaPlaybackCommandManagerPositionReceivedEventArgs;
    struct IMediaPlaybackCommandManagerPreviousReceivedEventArgs;
    struct IMediaPlaybackCommandManagerRateReceivedEventArgs;
    struct IMediaPlaybackCommandManagerRewindReceivedEventArgs;
    struct IMediaPlaybackCommandManagerShuffleReceivedEventArgs;
    struct IMediaPlaybackItem;
    struct IMediaPlaybackItem2;
    struct IMediaPlaybackItem3;
    struct IMediaPlaybackItemError;
    struct IMediaPlaybackItemFactory;
    struct IMediaPlaybackItemFactory2;
    struct IMediaPlaybackItemFailedEventArgs;
    struct IMediaPlaybackItemOpenedEventArgs;
    struct IMediaPlaybackItemStatics;
    struct IMediaPlaybackList;
    struct IMediaPlaybackList2;
    struct IMediaPlaybackList3;
    struct IMediaPlaybackSession;
    struct IMediaPlaybackSession2;
    struct IMediaPlaybackSession3;
    struct IMediaPlaybackSessionBufferingStartedEventArgs;
    struct IMediaPlaybackSessionOutputDegradationPolicyState;
    struct IMediaPlaybackSource;
    struct IMediaPlaybackSphericalVideoProjection;
    struct IMediaPlaybackTimedMetadataTrackList;
    struct IMediaPlayer;
    struct IMediaPlayer2;
    struct IMediaPlayer3;
    struct IMediaPlayer4;
    struct IMediaPlayer5;
    struct IMediaPlayer6;
    struct IMediaPlayer7;
    struct IMediaPlayerDataReceivedEventArgs;
    struct IMediaPlayerEffects;
    struct IMediaPlayerEffects2;
    struct IMediaPlayerFailedEventArgs;
    struct IMediaPlayerRateChangedEventArgs;
    struct IMediaPlayerSource;
    struct IMediaPlayerSource2;
    struct IMediaPlayerSurface;
    struct IPlaybackMediaMarker;
    struct IPlaybackMediaMarkerFactory;
    struct IPlaybackMediaMarkerReachedEventArgs;
    struct IPlaybackMediaMarkerSequence;
    struct ITimedMetadataPresentationModeChangedEventArgs;
    struct BackgroundMediaPlayer;
    struct CurrentMediaPlaybackItemChangedEventArgs;
    struct MediaBreak;
    struct MediaBreakEndedEventArgs;
    struct MediaBreakManager;
    struct MediaBreakSchedule;
    struct MediaBreakSeekedOverEventArgs;
    struct MediaBreakSkippedEventArgs;
    struct MediaBreakStartedEventArgs;
    struct MediaItemDisplayProperties;
    struct MediaPlaybackAudioTrackList;
    struct MediaPlaybackCommandManager;
    struct MediaPlaybackCommandManagerAutoRepeatModeReceivedEventArgs;
    struct MediaPlaybackCommandManagerCommandBehavior;
    struct MediaPlaybackCommandManagerFastForwardReceivedEventArgs;
    struct MediaPlaybackCommandManagerNextReceivedEventArgs;
    struct MediaPlaybackCommandManagerPauseReceivedEventArgs;
    struct MediaPlaybackCommandManagerPlayReceivedEventArgs;
    struct MediaPlaybackCommandManagerPositionReceivedEventArgs;
    struct MediaPlaybackCommandManagerPreviousReceivedEventArgs;
    struct MediaPlaybackCommandManagerRateReceivedEventArgs;
    struct MediaPlaybackCommandManagerRewindReceivedEventArgs;
    struct MediaPlaybackCommandManagerShuffleReceivedEventArgs;
    struct MediaPlaybackItem;
    struct MediaPlaybackItemError;
    struct MediaPlaybackItemFailedEventArgs;
    struct MediaPlaybackItemOpenedEventArgs;
    struct MediaPlaybackList;
    struct MediaPlaybackSession;
    struct MediaPlaybackSessionBufferingStartedEventArgs;
    struct MediaPlaybackSessionOutputDegradationPolicyState;
    struct MediaPlaybackSphericalVideoProjection;
    struct MediaPlaybackTimedMetadataTrackList;
    struct MediaPlaybackVideoTrackList;
    struct MediaPlayer;
    struct MediaPlayerDataReceivedEventArgs;
    struct MediaPlayerFailedEventArgs;
    struct MediaPlayerRateChangedEventArgs;
    struct MediaPlayerSurface;
    struct PlaybackMediaMarker;
    struct PlaybackMediaMarkerReachedEventArgs;
    struct PlaybackMediaMarkerSequence;
    struct TimedMetadataPresentationModeChangedEventArgs;
}
namespace winrt::impl
{
    template <> struct category<winrt::Windows::Media::Playback::IBackgroundMediaPlayerStatics>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Media::Playback::ICurrentMediaPlaybackItemChangedEventArgs>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Media::Playback::ICurrentMediaPlaybackItemChangedEventArgs2>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Media::Playback::IMediaBreak>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Media::Playback::IMediaBreakEndedEventArgs>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Media::Playback::IMediaBreakFactory>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Media::Playback::IMediaBreakManager>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Media::Playback::IMediaBreakSchedule>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Media::Playback::IMediaBreakSeekedOverEventArgs>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Media::Playback::IMediaBreakSkippedEventArgs>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Media::Playback::IMediaBreakStartedEventArgs>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Media::Playback::IMediaEnginePlaybackSource>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Media::Playback::IMediaItemDisplayProperties>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Media::Playback::IMediaPlaybackCommandManager>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Media::Playback::IMediaPlaybackCommandManagerAutoRepeatModeReceivedEventArgs>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Media::Playback::IMediaPlaybackCommandManagerCommandBehavior>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Media::Playback::IMediaPlaybackCommandManagerFastForwardReceivedEventArgs>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Media::Playback::IMediaPlaybackCommandManagerNextReceivedEventArgs>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Media::Playback::IMediaPlaybackCommandManagerPauseReceivedEventArgs>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Media::Playback::IMediaPlaybackCommandManagerPlayReceivedEventArgs>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Media::Playback::IMediaPlaybackCommandManagerPositionReceivedEventArgs>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Media::Playback::IMediaPlaybackCommandManagerPreviousReceivedEventArgs>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Media::Playback::IMediaPlaybackCommandManagerRateReceivedEventArgs>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Media::Playback::IMediaPlaybackCommandManagerRewindReceivedEventArgs>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Media::Playback::IMediaPlaybackCommandManagerShuffleReceivedEventArgs>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Media::Playback::IMediaPlaybackItem>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Media::Playback::IMediaPlaybackItem2>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Media::Playback::IMediaPlaybackItem3>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Media::Playback::IMediaPlaybackItemError>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Media::Playback::IMediaPlaybackItemFactory>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Media::Playback::IMediaPlaybackItemFactory2>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Media::Playback::IMediaPlaybackItemFailedEventArgs>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Media::Playback::IMediaPlaybackItemOpenedEventArgs>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Media::Playback::IMediaPlaybackItemStatics>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Media::Playback::IMediaPlaybackList>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Media::Playback::IMediaPlaybackList2>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Media::Playback::IMediaPlaybackList3>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Media::Playback::IMediaPlaybackSession>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Media::Playback::IMediaPlaybackSession2>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Media::Playback::IMediaPlaybackSession3>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Media::Playback::IMediaPlaybackSessionBufferingStartedEventArgs>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Media::Playback::IMediaPlaybackSessionOutputDegradationPolicyState>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Media::Playback::IMediaPlaybackSource>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Media::Playback::IMediaPlaybackSphericalVideoProjection>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Media::Playback::IMediaPlaybackTimedMetadataTrackList>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Media::Playback::IMediaPlayer>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Media::Playback::IMediaPlayer2>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Media::Playback::IMediaPlayer3>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Media::Playback::IMediaPlayer4>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Media::Playback::IMediaPlayer5>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Media::Playback::IMediaPlayer6>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Media::Playback::IMediaPlayer7>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Media::Playback::IMediaPlayerDataReceivedEventArgs>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Media::Playback::IMediaPlayerEffects>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Media::Playback::IMediaPlayerEffects2>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Media::Playback::IMediaPlayerFailedEventArgs>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Media::Playback::IMediaPlayerRateChangedEventArgs>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Media::Playback::IMediaPlayerSource>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Media::Playback::IMediaPlayerSource2>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Media::Playback::IMediaPlayerSurface>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Media::Playback::IPlaybackMediaMarker>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Media::Playback::IPlaybackMediaMarkerFactory>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Media::Playback::IPlaybackMediaMarkerReachedEventArgs>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Media::Playback::IPlaybackMediaMarkerSequence>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Media::Playback::ITimedMetadataPresentationModeChangedEventArgs>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Media::Playback::BackgroundMediaPlayer>{ using type = class_category; };
    template <> struct category<winrt::Windows::Media::Playback::CurrentMediaPlaybackItemChangedEventArgs>{ using type = class_category; };
    template <> struct category<winrt::Windows::Media::Playback::MediaBreak>{ using type = class_category; };
    template <> struct category<winrt::Windows::Media::Playback::MediaBreakEndedEventArgs>{ using type = class_category; };
    template <> struct category<winrt::Windows::Media::Playback::MediaBreakManager>{ using type = class_category; };
    template <> struct category<winrt::Windows::Media::Playback::MediaBreakSchedule>{ using type = class_category; };
    template <> struct category<winrt::Windows::Media::Playback::MediaBreakSeekedOverEventArgs>{ using type = class_category; };
    template <> struct category<winrt::Windows::Media::Playback::MediaBreakSkippedEventArgs>{ using type = class_category; };
    template <> struct category<winrt::Windows::Media::Playback::MediaBreakStartedEventArgs>{ using type = class_category; };
    template <> struct category<winrt::Windows::Media::Playback::MediaItemDisplayProperties>{ using type = class_category; };
    template <> struct category<winrt::Windows::Media::Playback::MediaPlaybackAudioTrackList>{ using type = class_category; };
    template <> struct category<winrt::Windows::Media::Playback::MediaPlaybackCommandManager>{ using type = class_category; };
    template <> struct category<winrt::Windows::Media::Playback::MediaPlaybackCommandManagerAutoRepeatModeReceivedEventArgs>{ using type = class_category; };
    template <> struct category<winrt::Windows::Media::Playback::MediaPlaybackCommandManagerCommandBehavior>{ using type = class_category; };
    template <> struct category<winrt::Windows::Media::Playback::MediaPlaybackCommandManagerFastForwardReceivedEventArgs>{ using type = class_category; };
    template <> struct category<winrt::Windows::Media::Playback::MediaPlaybackCommandManagerNextReceivedEventArgs>{ using type = class_category; };
    template <> struct category<winrt::Windows::Media::Playback::MediaPlaybackCommandManagerPauseReceivedEventArgs>{ using type = class_category; };
    template <> struct category<winrt::Windows::Media::Playback::MediaPlaybackCommandManagerPlayReceivedEventArgs>{ using type = class_category; };
    template <> struct category<winrt::Windows::Media::Playback::MediaPlaybackCommandManagerPositionReceivedEventArgs>{ using type = class_category; };
    template <> struct category<winrt::Windows::Media::Playback::MediaPlaybackCommandManagerPreviousReceivedEventArgs>{ using type = class_category; };
    template <> struct category<winrt::Windows::Media::Playback::MediaPlaybackCommandManagerRateReceivedEventArgs>{ using type = class_category; };
    template <> struct category<winrt::Windows::Media::Playback::MediaPlaybackCommandManagerRewindReceivedEventArgs>{ using type = class_category; };
    template <> struct category<winrt::Windows::Media::Playback::MediaPlaybackCommandManagerShuffleReceivedEventArgs>{ using type = class_category; };
    template <> struct category<winrt::Windows::Media::Playback::MediaPlaybackItem>{ using type = class_category; };
    template <> struct category<winrt::Windows::Media::Playback::MediaPlaybackItemError>{ using type = class_category; };
    template <> struct category<winrt::Windows::Media::Playback::MediaPlaybackItemFailedEventArgs>{ using type = class_category; };
    template <> struct category<winrt::Windows::Media::Playback::MediaPlaybackItemOpenedEventArgs>{ using type = class_category; };
    template <> struct category<winrt::Windows::Media::Playback::MediaPlaybackList>{ using type = class_category; };
    template <> struct category<winrt::Windows::Media::Playback::MediaPlaybackSession>{ using type = class_category; };
    template <> struct category<winrt::Windows::Media::Playback::MediaPlaybackSessionBufferingStartedEventArgs>{ using type = class_category; };
    template <> struct category<winrt::Windows::Media::Playback::MediaPlaybackSessionOutputDegradationPolicyState>{ using type = class_category; };
    template <> struct category<winrt::Windows::Media::Playback::MediaPlaybackSphericalVideoProjection>{ using type = class_category; };
    template <> struct category<winrt::Windows::Media::Playback::MediaPlaybackTimedMetadataTrackList>{ using type = class_category; };
    template <> struct category<winrt::Windows::Media::Playback::MediaPlaybackVideoTrackList>{ using type = class_category; };
    template <> struct category<winrt::Windows::Media::Playback::MediaPlayer>{ using type = class_category; };
    template <> struct category<winrt::Windows::Media::Playback::MediaPlayerDataReceivedEventArgs>{ using type = class_category; };
    template <> struct category<winrt::Windows::Media::Playback::MediaPlayerFailedEventArgs>{ using type = class_category; };
    template <> struct category<winrt::Windows::Media::Playback::MediaPlayerRateChangedEventArgs>{ using type = class_category; };
    template <> struct category<winrt::Windows::Media::Playback::MediaPlayerSurface>{ using type = class_category; };
    template <> struct category<winrt::Windows::Media::Playback::PlaybackMediaMarker>{ using type = class_category; };
    template <> struct category<winrt::Windows::Media::Playback::PlaybackMediaMarkerReachedEventArgs>{ using type = class_category; };
    template <> struct category<winrt::Windows::Media::Playback::PlaybackMediaMarkerSequence>{ using type = class_category; };
    template <> struct category<winrt::Windows::Media::Playback::TimedMetadataPresentationModeChangedEventArgs>{ using type = class_category; };
    template <> struct category<winrt::Windows::Media::Playback::AutoLoadedDisplayPropertyKind>{ using type = enum_category; };
    template <> struct category<winrt::Windows::Media::Playback::FailedMediaStreamKind>{ using type = enum_category; };
    template <> struct category<winrt::Windows::Media::Playback::MediaBreakInsertionMethod>{ using type = enum_category; };
    template <> struct category<winrt::Windows::Media::Playback::MediaCommandEnablingRule>{ using type = enum_category; };
    template <> struct category<winrt::Windows::Media::Playback::MediaPlaybackItemChangedReason>{ using type = enum_category; };
    template <> struct category<winrt::Windows::Media::Playback::MediaPlaybackItemErrorCode>{ using type = enum_category; };
    template <> struct category<winrt::Windows::Media::Playback::MediaPlaybackSessionVideoConstrictionReason>{ using type = enum_category; };
    template <> struct category<winrt::Windows::Media::Playback::MediaPlaybackState>{ using type = enum_category; };
    template <> struct category<winrt::Windows::Media::Playback::MediaPlayerAudioCategory>{ using type = enum_category; };
    template <> struct category<winrt::Windows::Media::Playback::MediaPlayerAudioDeviceType>{ using type = enum_category; };
    template <> struct category<winrt::Windows::Media::Playback::MediaPlayerError>{ using type = enum_category; };
    template <> struct category<winrt::Windows::Media::Playback::MediaPlayerState>{ using type = enum_category; };
    template <> struct category<winrt::Windows::Media::Playback::SphericalVideoProjectionMode>{ using type = enum_category; };
    template <> struct category<winrt::Windows::Media::Playback::StereoscopicVideoRenderMode>{ using type = enum_category; };
    template <> struct category<winrt::Windows::Media::Playback::TimedMetadataTrackPresentationMode>{ using type = enum_category; };
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Playback::BackgroundMediaPlayer> = L"Windows.Media.Playback.BackgroundMediaPlayer";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Playback::CurrentMediaPlaybackItemChangedEventArgs> = L"Windows.Media.Playback.CurrentMediaPlaybackItemChangedEventArgs";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Playback::MediaBreak> = L"Windows.Media.Playback.MediaBreak";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Playback::MediaBreakEndedEventArgs> = L"Windows.Media.Playback.MediaBreakEndedEventArgs";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Playback::MediaBreakManager> = L"Windows.Media.Playback.MediaBreakManager";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Playback::MediaBreakSchedule> = L"Windows.Media.Playback.MediaBreakSchedule";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Playback::MediaBreakSeekedOverEventArgs> = L"Windows.Media.Playback.MediaBreakSeekedOverEventArgs";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Playback::MediaBreakSkippedEventArgs> = L"Windows.Media.Playback.MediaBreakSkippedEventArgs";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Playback::MediaBreakStartedEventArgs> = L"Windows.Media.Playback.MediaBreakStartedEventArgs";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Playback::MediaItemDisplayProperties> = L"Windows.Media.Playback.MediaItemDisplayProperties";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Playback::MediaPlaybackAudioTrackList> = L"Windows.Media.Playback.MediaPlaybackAudioTrackList";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Playback::MediaPlaybackCommandManager> = L"Windows.Media.Playback.MediaPlaybackCommandManager";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Playback::MediaPlaybackCommandManagerAutoRepeatModeReceivedEventArgs> = L"Windows.Media.Playback.MediaPlaybackCommandManagerAutoRepeatModeReceivedEventArgs";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Playback::MediaPlaybackCommandManagerCommandBehavior> = L"Windows.Media.Playback.MediaPlaybackCommandManagerCommandBehavior";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Playback::MediaPlaybackCommandManagerFastForwardReceivedEventArgs> = L"Windows.Media.Playback.MediaPlaybackCommandManagerFastForwardReceivedEventArgs";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Playback::MediaPlaybackCommandManagerNextReceivedEventArgs> = L"Windows.Media.Playback.MediaPlaybackCommandManagerNextReceivedEventArgs";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Playback::MediaPlaybackCommandManagerPauseReceivedEventArgs> = L"Windows.Media.Playback.MediaPlaybackCommandManagerPauseReceivedEventArgs";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Playback::MediaPlaybackCommandManagerPlayReceivedEventArgs> = L"Windows.Media.Playback.MediaPlaybackCommandManagerPlayReceivedEventArgs";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Playback::MediaPlaybackCommandManagerPositionReceivedEventArgs> = L"Windows.Media.Playback.MediaPlaybackCommandManagerPositionReceivedEventArgs";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Playback::MediaPlaybackCommandManagerPreviousReceivedEventArgs> = L"Windows.Media.Playback.MediaPlaybackCommandManagerPreviousReceivedEventArgs";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Playback::MediaPlaybackCommandManagerRateReceivedEventArgs> = L"Windows.Media.Playback.MediaPlaybackCommandManagerRateReceivedEventArgs";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Playback::MediaPlaybackCommandManagerRewindReceivedEventArgs> = L"Windows.Media.Playback.MediaPlaybackCommandManagerRewindReceivedEventArgs";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Playback::MediaPlaybackCommandManagerShuffleReceivedEventArgs> = L"Windows.Media.Playback.MediaPlaybackCommandManagerShuffleReceivedEventArgs";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Playback::MediaPlaybackItem> = L"Windows.Media.Playback.MediaPlaybackItem";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Playback::MediaPlaybackItemError> = L"Windows.Media.Playback.MediaPlaybackItemError";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Playback::MediaPlaybackItemFailedEventArgs> = L"Windows.Media.Playback.MediaPlaybackItemFailedEventArgs";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Playback::MediaPlaybackItemOpenedEventArgs> = L"Windows.Media.Playback.MediaPlaybackItemOpenedEventArgs";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Playback::MediaPlaybackList> = L"Windows.Media.Playback.MediaPlaybackList";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Playback::MediaPlaybackSession> = L"Windows.Media.Playback.MediaPlaybackSession";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Playback::MediaPlaybackSessionBufferingStartedEventArgs> = L"Windows.Media.Playback.MediaPlaybackSessionBufferingStartedEventArgs";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Playback::MediaPlaybackSessionOutputDegradationPolicyState> = L"Windows.Media.Playback.MediaPlaybackSessionOutputDegradationPolicyState";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Playback::MediaPlaybackSphericalVideoProjection> = L"Windows.Media.Playback.MediaPlaybackSphericalVideoProjection";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Playback::MediaPlaybackTimedMetadataTrackList> = L"Windows.Media.Playback.MediaPlaybackTimedMetadataTrackList";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Playback::MediaPlaybackVideoTrackList> = L"Windows.Media.Playback.MediaPlaybackVideoTrackList";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Playback::MediaPlayer> = L"Windows.Media.Playback.MediaPlayer";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Playback::MediaPlayerDataReceivedEventArgs> = L"Windows.Media.Playback.MediaPlayerDataReceivedEventArgs";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Playback::MediaPlayerFailedEventArgs> = L"Windows.Media.Playback.MediaPlayerFailedEventArgs";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Playback::MediaPlayerRateChangedEventArgs> = L"Windows.Media.Playback.MediaPlayerRateChangedEventArgs";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Playback::MediaPlayerSurface> = L"Windows.Media.Playback.MediaPlayerSurface";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Playback::PlaybackMediaMarker> = L"Windows.Media.Playback.PlaybackMediaMarker";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Playback::PlaybackMediaMarkerReachedEventArgs> = L"Windows.Media.Playback.PlaybackMediaMarkerReachedEventArgs";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Playback::PlaybackMediaMarkerSequence> = L"Windows.Media.Playback.PlaybackMediaMarkerSequence";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Playback::TimedMetadataPresentationModeChangedEventArgs> = L"Windows.Media.Playback.TimedMetadataPresentationModeChangedEventArgs";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Playback::AutoLoadedDisplayPropertyKind> = L"Windows.Media.Playback.AutoLoadedDisplayPropertyKind";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Playback::FailedMediaStreamKind> = L"Windows.Media.Playback.FailedMediaStreamKind";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Playback::MediaBreakInsertionMethod> = L"Windows.Media.Playback.MediaBreakInsertionMethod";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Playback::MediaCommandEnablingRule> = L"Windows.Media.Playback.MediaCommandEnablingRule";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Playback::MediaPlaybackItemChangedReason> = L"Windows.Media.Playback.MediaPlaybackItemChangedReason";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Playback::MediaPlaybackItemErrorCode> = L"Windows.Media.Playback.MediaPlaybackItemErrorCode";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Playback::MediaPlaybackSessionVideoConstrictionReason> = L"Windows.Media.Playback.MediaPlaybackSessionVideoConstrictionReason";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Playback::MediaPlaybackState> = L"Windows.Media.Playback.MediaPlaybackState";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Playback::MediaPlayerAudioCategory> = L"Windows.Media.Playback.MediaPlayerAudioCategory";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Playback::MediaPlayerAudioDeviceType> = L"Windows.Media.Playback.MediaPlayerAudioDeviceType";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Playback::MediaPlayerError> = L"Windows.Media.Playback.MediaPlayerError";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Playback::MediaPlayerState> = L"Windows.Media.Playback.MediaPlayerState";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Playback::SphericalVideoProjectionMode> = L"Windows.Media.Playback.SphericalVideoProjectionMode";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Playback::StereoscopicVideoRenderMode> = L"Windows.Media.Playback.StereoscopicVideoRenderMode";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Playback::TimedMetadataTrackPresentationMode> = L"Windows.Media.Playback.TimedMetadataTrackPresentationMode";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Playback::IBackgroundMediaPlayerStatics> = L"Windows.Media.Playback.IBackgroundMediaPlayerStatics";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Playback::ICurrentMediaPlaybackItemChangedEventArgs> = L"Windows.Media.Playback.ICurrentMediaPlaybackItemChangedEventArgs";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Playback::ICurrentMediaPlaybackItemChangedEventArgs2> = L"Windows.Media.Playback.ICurrentMediaPlaybackItemChangedEventArgs2";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Playback::IMediaBreak> = L"Windows.Media.Playback.IMediaBreak";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Playback::IMediaBreakEndedEventArgs> = L"Windows.Media.Playback.IMediaBreakEndedEventArgs";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Playback::IMediaBreakFactory> = L"Windows.Media.Playback.IMediaBreakFactory";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Playback::IMediaBreakManager> = L"Windows.Media.Playback.IMediaBreakManager";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Playback::IMediaBreakSchedule> = L"Windows.Media.Playback.IMediaBreakSchedule";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Playback::IMediaBreakSeekedOverEventArgs> = L"Windows.Media.Playback.IMediaBreakSeekedOverEventArgs";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Playback::IMediaBreakSkippedEventArgs> = L"Windows.Media.Playback.IMediaBreakSkippedEventArgs";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Playback::IMediaBreakStartedEventArgs> = L"Windows.Media.Playback.IMediaBreakStartedEventArgs";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Playback::IMediaEnginePlaybackSource> = L"Windows.Media.Playback.IMediaEnginePlaybackSource";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Playback::IMediaItemDisplayProperties> = L"Windows.Media.Playback.IMediaItemDisplayProperties";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Playback::IMediaPlaybackCommandManager> = L"Windows.Media.Playback.IMediaPlaybackCommandManager";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Playback::IMediaPlaybackCommandManagerAutoRepeatModeReceivedEventArgs> = L"Windows.Media.Playback.IMediaPlaybackCommandManagerAutoRepeatModeReceivedEventArgs";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Playback::IMediaPlaybackCommandManagerCommandBehavior> = L"Windows.Media.Playback.IMediaPlaybackCommandManagerCommandBehavior";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Playback::IMediaPlaybackCommandManagerFastForwardReceivedEventArgs> = L"Windows.Media.Playback.IMediaPlaybackCommandManagerFastForwardReceivedEventArgs";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Playback::IMediaPlaybackCommandManagerNextReceivedEventArgs> = L"Windows.Media.Playback.IMediaPlaybackCommandManagerNextReceivedEventArgs";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Playback::IMediaPlaybackCommandManagerPauseReceivedEventArgs> = L"Windows.Media.Playback.IMediaPlaybackCommandManagerPauseReceivedEventArgs";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Playback::IMediaPlaybackCommandManagerPlayReceivedEventArgs> = L"Windows.Media.Playback.IMediaPlaybackCommandManagerPlayReceivedEventArgs";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Playback::IMediaPlaybackCommandManagerPositionReceivedEventArgs> = L"Windows.Media.Playback.IMediaPlaybackCommandManagerPositionReceivedEventArgs";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Playback::IMediaPlaybackCommandManagerPreviousReceivedEventArgs> = L"Windows.Media.Playback.IMediaPlaybackCommandManagerPreviousReceivedEventArgs";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Playback::IMediaPlaybackCommandManagerRateReceivedEventArgs> = L"Windows.Media.Playback.IMediaPlaybackCommandManagerRateReceivedEventArgs";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Playback::IMediaPlaybackCommandManagerRewindReceivedEventArgs> = L"Windows.Media.Playback.IMediaPlaybackCommandManagerRewindReceivedEventArgs";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Playback::IMediaPlaybackCommandManagerShuffleReceivedEventArgs> = L"Windows.Media.Playback.IMediaPlaybackCommandManagerShuffleReceivedEventArgs";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Playback::IMediaPlaybackItem> = L"Windows.Media.Playback.IMediaPlaybackItem";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Playback::IMediaPlaybackItem2> = L"Windows.Media.Playback.IMediaPlaybackItem2";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Playback::IMediaPlaybackItem3> = L"Windows.Media.Playback.IMediaPlaybackItem3";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Playback::IMediaPlaybackItemError> = L"Windows.Media.Playback.IMediaPlaybackItemError";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Playback::IMediaPlaybackItemFactory> = L"Windows.Media.Playback.IMediaPlaybackItemFactory";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Playback::IMediaPlaybackItemFactory2> = L"Windows.Media.Playback.IMediaPlaybackItemFactory2";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Playback::IMediaPlaybackItemFailedEventArgs> = L"Windows.Media.Playback.IMediaPlaybackItemFailedEventArgs";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Playback::IMediaPlaybackItemOpenedEventArgs> = L"Windows.Media.Playback.IMediaPlaybackItemOpenedEventArgs";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Playback::IMediaPlaybackItemStatics> = L"Windows.Media.Playback.IMediaPlaybackItemStatics";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Playback::IMediaPlaybackList> = L"Windows.Media.Playback.IMediaPlaybackList";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Playback::IMediaPlaybackList2> = L"Windows.Media.Playback.IMediaPlaybackList2";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Playback::IMediaPlaybackList3> = L"Windows.Media.Playback.IMediaPlaybackList3";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Playback::IMediaPlaybackSession> = L"Windows.Media.Playback.IMediaPlaybackSession";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Playback::IMediaPlaybackSession2> = L"Windows.Media.Playback.IMediaPlaybackSession2";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Playback::IMediaPlaybackSession3> = L"Windows.Media.Playback.IMediaPlaybackSession3";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Playback::IMediaPlaybackSessionBufferingStartedEventArgs> = L"Windows.Media.Playback.IMediaPlaybackSessionBufferingStartedEventArgs";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Playback::IMediaPlaybackSessionOutputDegradationPolicyState> = L"Windows.Media.Playback.IMediaPlaybackSessionOutputDegradationPolicyState";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Playback::IMediaPlaybackSource> = L"Windows.Media.Playback.IMediaPlaybackSource";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Playback::IMediaPlaybackSphericalVideoProjection> = L"Windows.Media.Playback.IMediaPlaybackSphericalVideoProjection";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Playback::IMediaPlaybackTimedMetadataTrackList> = L"Windows.Media.Playback.IMediaPlaybackTimedMetadataTrackList";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Playback::IMediaPlayer> = L"Windows.Media.Playback.IMediaPlayer";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Playback::IMediaPlayer2> = L"Windows.Media.Playback.IMediaPlayer2";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Playback::IMediaPlayer3> = L"Windows.Media.Playback.IMediaPlayer3";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Playback::IMediaPlayer4> = L"Windows.Media.Playback.IMediaPlayer4";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Playback::IMediaPlayer5> = L"Windows.Media.Playback.IMediaPlayer5";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Playback::IMediaPlayer6> = L"Windows.Media.Playback.IMediaPlayer6";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Playback::IMediaPlayer7> = L"Windows.Media.Playback.IMediaPlayer7";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Playback::IMediaPlayerDataReceivedEventArgs> = L"Windows.Media.Playback.IMediaPlayerDataReceivedEventArgs";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Playback::IMediaPlayerEffects> = L"Windows.Media.Playback.IMediaPlayerEffects";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Playback::IMediaPlayerEffects2> = L"Windows.Media.Playback.IMediaPlayerEffects2";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Playback::IMediaPlayerFailedEventArgs> = L"Windows.Media.Playback.IMediaPlayerFailedEventArgs";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Playback::IMediaPlayerRateChangedEventArgs> = L"Windows.Media.Playback.IMediaPlayerRateChangedEventArgs";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Playback::IMediaPlayerSource> = L"Windows.Media.Playback.IMediaPlayerSource";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Playback::IMediaPlayerSource2> = L"Windows.Media.Playback.IMediaPlayerSource2";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Playback::IMediaPlayerSurface> = L"Windows.Media.Playback.IMediaPlayerSurface";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Playback::IPlaybackMediaMarker> = L"Windows.Media.Playback.IPlaybackMediaMarker";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Playback::IPlaybackMediaMarkerFactory> = L"Windows.Media.Playback.IPlaybackMediaMarkerFactory";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Playback::IPlaybackMediaMarkerReachedEventArgs> = L"Windows.Media.Playback.IPlaybackMediaMarkerReachedEventArgs";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Playback::IPlaybackMediaMarkerSequence> = L"Windows.Media.Playback.IPlaybackMediaMarkerSequence";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Playback::ITimedMetadataPresentationModeChangedEventArgs> = L"Windows.Media.Playback.ITimedMetadataPresentationModeChangedEventArgs";
    template <> inline constexpr guid guid_v<winrt::Windows::Media::Playback::IBackgroundMediaPlayerStatics>{ 0x856DDBC1,0x55F7,0x471F,{ 0xA0,0xF2,0x68,0xAC,0x4C,0x90,0x45,0x92 } }; // 856DDBC1-55F7-471F-A0F2-68AC4C904592
    template <> inline constexpr guid guid_v<winrt::Windows::Media::Playback::ICurrentMediaPlaybackItemChangedEventArgs>{ 0x1743A892,0x5C43,0x4A15,{ 0x96,0x7A,0x57,0x2D,0x2D,0x0F,0x26,0xC6 } }; // 1743A892-5C43-4A15-967A-572D2D0F26C6
    template <> inline constexpr guid guid_v<winrt::Windows::Media::Playback::ICurrentMediaPlaybackItemChangedEventArgs2>{ 0x1D80A51E,0x996E,0x40A9,{ 0xBE,0x48,0xE6,0x6E,0xC9,0x0B,0x2B,0x7D } }; // 1D80A51E-996E-40A9-BE48-E66EC90B2B7D
    template <> inline constexpr guid guid_v<winrt::Windows::Media::Playback::IMediaBreak>{ 0x714BE270,0x0DEF,0x4EBC,{ 0xA4,0x89,0x6B,0x34,0x93,0x0E,0x15,0x58 } }; // 714BE270-0DEF-4EBC-A489-6B34930E1558
    template <> inline constexpr guid guid_v<winrt::Windows::Media::Playback::IMediaBreakEndedEventArgs>{ 0x32B93276,0x1C5D,0x4FEE,{ 0x87,0x32,0x23,0x6D,0xC3,0xA8,0x85,0x80 } }; // 32B93276-1C5D-4FEE-8732-236DC3A88580
    template <> inline constexpr guid guid_v<winrt::Windows::Media::Playback::IMediaBreakFactory>{ 0x4516E002,0x18E0,0x4079,{ 0x8B,0x5F,0xD3,0x34,0x95,0xC1,0x5D,0x2E } }; // 4516E002-18E0-4079-8B5F-D33495C15D2E
    template <> inline constexpr guid guid_v<winrt::Windows::Media::Playback::IMediaBreakManager>{ 0xA854DDB1,0xFEB4,0x4D9B,{ 0x9D,0x97,0x0F,0xDB,0xE5,0x8E,0x5E,0x39 } }; // A854DDB1-FEB4-4D9B-9D97-0FDBE58E5E39
    template <> inline constexpr guid guid_v<winrt::Windows::Media::Playback::IMediaBreakSchedule>{ 0xA19A5813,0x98B6,0x41D8,{ 0x83,0xDA,0xF9,0x71,0xD2,0x2B,0x7B,0xBA } }; // A19A5813-98B6-41D8-83DA-F971D22B7BBA
    template <> inline constexpr guid guid_v<winrt::Windows::Media::Playback::IMediaBreakSeekedOverEventArgs>{ 0xE5AA6746,0x0606,0x4492,{ 0xB9,0xD3,0xC3,0xC8,0xFD,0xE0,0xA4,0xEA } }; // E5AA6746-0606-4492-B9D3-C3C8FDE0A4EA
    template <> inline constexpr guid guid_v<winrt::Windows::Media::Playback::IMediaBreakSkippedEventArgs>{ 0x6EE94C05,0x2F54,0x4A3E,{ 0xA3,0xAB,0x24,0xC3,0xB2,0x70,0xB4,0xA3 } }; // 6EE94C05-2F54-4A3E-A3AB-24C3B270B4A3
    template <> inline constexpr guid guid_v<winrt::Windows::Media::Playback::IMediaBreakStartedEventArgs>{ 0xA87EFE71,0xDFD4,0x454A,{ 0x95,0x6E,0x0A,0x4A,0x64,0x83,0x95,0xF8 } }; // A87EFE71-DFD4-454A-956E-0A4A648395F8
    template <> inline constexpr guid guid_v<winrt::Windows::Media::Playback::IMediaEnginePlaybackSource>{ 0x5C1D0BA7,0x3856,0x48B9,{ 0x8D,0xC6,0x24,0x4B,0xF1,0x07,0xBF,0x8C } }; // 5C1D0BA7-3856-48B9-8DC6-244BF107BF8C
    template <> inline constexpr guid guid_v<winrt::Windows::Media::Playback::IMediaItemDisplayProperties>{ 0x1E3C1B48,0x7097,0x4384,{ 0xA2,0x17,0xC1,0x29,0x1D,0xFA,0x8C,0x16 } }; // 1E3C1B48-7097-4384-A217-C1291DFA8C16
    template <> inline constexpr guid guid_v<winrt::Windows::Media::Playback::IMediaPlaybackCommandManager>{ 0x5ACEE5A6,0x5CB6,0x4A5A,{ 0x85,0x21,0xCC,0x86,0xB1,0xC1,0xED,0x37 } }; // 5ACEE5A6-5CB6-4A5A-8521-CC86B1C1ED37
    template <> inline constexpr guid guid_v<winrt::Windows::Media::Playback::IMediaPlaybackCommandManagerAutoRepeatModeReceivedEventArgs>{ 0x3D6F4F23,0x5230,0x4411,{ 0xA0,0xE9,0xBA,0xD9,0x4C,0x2A,0x04,0x5C } }; // 3D6F4F23-5230-4411-A0E9-BAD94C2A045C
    template <> inline constexpr guid guid_v<winrt::Windows::Media::Playback::IMediaPlaybackCommandManagerCommandBehavior>{ 0x786C1E78,0xCE78,0x4A10,{ 0xAF,0xD6,0x84,0x3F,0xCB,0xB9,0x0C,0x2E } }; // 786C1E78-CE78-4A10-AFD6-843FCBB90C2E
    template <> inline constexpr guid guid_v<winrt::Windows::Media::Playback::IMediaPlaybackCommandManagerFastForwardReceivedEventArgs>{ 0x30F064D9,0xB491,0x4D0A,{ 0xBC,0x21,0x30,0x98,0xBD,0x13,0x32,0xE9 } }; // 30F064D9-B491-4D0A-BC21-3098BD1332E9
    template <> inline constexpr guid guid_v<winrt::Windows::Media::Playback::IMediaPlaybackCommandManagerNextReceivedEventArgs>{ 0xE1504433,0xA2B0,0x45D4,{ 0xB9,0xDE,0x5F,0x42,0xAC,0x14,0xA8,0x39 } }; // E1504433-A2B0-45D4-B9DE-5F42AC14A839
    template <> inline constexpr guid guid_v<winrt::Windows::Media::Playback::IMediaPlaybackCommandManagerPauseReceivedEventArgs>{ 0x5CECCD1C,0xC25C,0x4221,{ 0xB1,0x6C,0xC3,0xC9,0x8C,0xE0,0x12,0xD6 } }; // 5CECCD1C-C25C-4221-B16C-C3C98CE012D6
    template <> inline constexpr guid guid_v<winrt::Windows::Media::Playback::IMediaPlaybackCommandManagerPlayReceivedEventArgs>{ 0x9AF0004E,0x578B,0x4C56,{ 0xA0,0x06,0x16,0x15,0x9D,0x88,0x8A,0x48 } }; // 9AF0004E-578B-4C56-A006-16159D888A48
    template <> inline constexpr guid guid_v<winrt::Windows::Media::Playback::IMediaPlaybackCommandManagerPositionReceivedEventArgs>{ 0x5591A754,0xD627,0x4BDD,{ 0xA9,0x0D,0x86,0xA0,0x15,0xB2,0x49,0x02 } }; // 5591A754-D627-4BDD-A90D-86A015B24902
    template <> inline constexpr guid guid_v<winrt::Windows::Media::Playback::IMediaPlaybackCommandManagerPreviousReceivedEventArgs>{ 0x525E3081,0x4632,0x4F76,{ 0x99,0xB1,0xD7,0x71,0x62,0x3F,0x62,0x87 } }; // 525E3081-4632-4F76-99B1-D771623F6287
    template <> inline constexpr guid guid_v<winrt::Windows::Media::Playback::IMediaPlaybackCommandManagerRateReceivedEventArgs>{ 0x18EA3939,0x4A16,0x4169,{ 0x8B,0x05,0x3E,0xB9,0xF5,0xFF,0x78,0xEB } }; // 18EA3939-4A16-4169-8B05-3EB9F5FF78EB
    template <> inline constexpr guid guid_v<winrt::Windows::Media::Playback::IMediaPlaybackCommandManagerRewindReceivedEventArgs>{ 0x9F085947,0xA3C0,0x425D,{ 0xAA,0xEF,0x97,0xBA,0x78,0x98,0xB1,0x41 } }; // 9F085947-A3C0-425D-AAEF-97BA7898B141
    template <> inline constexpr guid guid_v<winrt::Windows::Media::Playback::IMediaPlaybackCommandManagerShuffleReceivedEventArgs>{ 0x50A05CEF,0x63EE,0x4A96,{ 0xB7,0xB5,0xFE,0xE0,0x8B,0x9F,0xF9,0x0C } }; // 50A05CEF-63EE-4A96-B7B5-FEE08B9FF90C
    template <> inline constexpr guid guid_v<winrt::Windows::Media::Playback::IMediaPlaybackItem>{ 0x047097D2,0xE4AF,0x48AB,{ 0xB2,0x83,0x69,0x29,0xE6,0x74,0xEC,0xE2 } }; // 047097D2-E4AF-48AB-B283-6929E674ECE2
    template <> inline constexpr guid guid_v<winrt::Windows::Media::Playback::IMediaPlaybackItem2>{ 0xD859D171,0xD7EF,0x4B81,{ 0xAC,0x1F,0xF4,0x04,0x93,0xCB,0xB0,0x91 } }; // D859D171-D7EF-4B81-AC1F-F40493CBB091
    template <> inline constexpr guid guid_v<winrt::Windows::Media::Playback::IMediaPlaybackItem3>{ 0x0D328220,0xB80A,0x4D09,{ 0x9F,0xF8,0xF8,0x70,0x94,0xA1,0xC8,0x31 } }; // 0D328220-B80A-4D09-9FF8-F87094A1C831
    template <> inline constexpr guid guid_v<winrt::Windows::Media::Playback::IMediaPlaybackItemError>{ 0x69FBEF2B,0xDCD6,0x4DF9,{ 0xA4,0x50,0xDB,0xF4,0xC6,0xF1,0xC2,0xC2 } }; // 69FBEF2B-DCD6-4DF9-A450-DBF4C6F1C2C2
    template <> inline constexpr guid guid_v<winrt::Windows::Media::Playback::IMediaPlaybackItemFactory>{ 0x7133FCE1,0x1769,0x4FF9,{ 0xA7,0xC1,0x38,0xD2,0xC4,0xD4,0x23,0x60 } }; // 7133FCE1-1769-4FF9-A7C1-38D2C4D42360
    template <> inline constexpr guid guid_v<winrt::Windows::Media::Playback::IMediaPlaybackItemFactory2>{ 0xD77CDF3A,0xB947,0x4972,{ 0xB3,0x5D,0xAD,0xFB,0x93,0x1A,0x71,0xE6 } }; // D77CDF3A-B947-4972-B35D-ADFB931A71E6
    template <> inline constexpr guid guid_v<winrt::Windows::Media::Playback::IMediaPlaybackItemFailedEventArgs>{ 0x7703134A,0xE9A7,0x47C3,{ 0x86,0x2C,0xC6,0x56,0xD3,0x06,0x83,0xD4 } }; // 7703134A-E9A7-47C3-862C-C656D30683D4
    template <> inline constexpr guid guid_v<winrt::Windows::Media::Playback::IMediaPlaybackItemOpenedEventArgs>{ 0xCBD9BD82,0x3037,0x4FBE,{ 0xAE,0x8F,0x39,0xFC,0x39,0xED,0xF4,0xEF } }; // CBD9BD82-3037-4FBE-AE8F-39FC39EDF4EF
    template <> inline constexpr guid guid_v<winrt::Windows::Media::Playback::IMediaPlaybackItemStatics>{ 0x4B1BE7F4,0x4345,0x403C,{ 0x8A,0x67,0xF5,0xDE,0x91,0xDF,0x4C,0x86 } }; // 4B1BE7F4-4345-403C-8A67-F5DE91DF4C86
    template <> inline constexpr guid guid_v<winrt::Windows::Media::Playback::IMediaPlaybackList>{ 0x7F77EE9C,0xDC42,0x4E26,{ 0xA9,0x8D,0x78,0x50,0xDF,0x8E,0xC9,0x25 } }; // 7F77EE9C-DC42-4E26-A98D-7850DF8EC925
    template <> inline constexpr guid guid_v<winrt::Windows::Media::Playback::IMediaPlaybackList2>{ 0x0E09B478,0x600A,0x4274,{ 0xA1,0x4B,0x0B,0x67,0x23,0xD0,0xF4,0x8B } }; // 0E09B478-600A-4274-A14B-0B6723D0F48B
    template <> inline constexpr guid guid_v<winrt::Windows::Media::Playback::IMediaPlaybackList3>{ 0xDD24BBA9,0xBC47,0x4463,{ 0xAA,0x90,0xC1,0x8B,0x7E,0x5F,0xFD,0xE1 } }; // DD24BBA9-BC47-4463-AA90-C18B7E5FFDE1
    template <> inline constexpr guid guid_v<winrt::Windows::Media::Playback::IMediaPlaybackSession>{ 0xC32B683D,0x0407,0x41BA,{ 0x89,0x46,0x8B,0x34,0x5A,0x5A,0x54,0x35 } }; // C32B683D-0407-41BA-8946-8B345A5A5435
    template <> inline constexpr guid guid_v<winrt::Windows::Media::Playback::IMediaPlaybackSession2>{ 0xF8BA7C79,0x1FC8,0x4097,{ 0xAD,0x70,0xC0,0xFA,0x18,0xCC,0x00,0x50 } }; // F8BA7C79-1FC8-4097-AD70-C0FA18CC0050
    template <> inline constexpr guid guid_v<winrt::Windows::Media::Playback::IMediaPlaybackSession3>{ 0x7BA2B41A,0xA3E2,0x405F,{ 0xB7,0x7B,0xA4,0x81,0x2C,0x23,0x8B,0x66 } }; // 7BA2B41A-A3E2-405F-B77B-A4812C238B66
    template <> inline constexpr guid guid_v<winrt::Windows::Media::Playback::IMediaPlaybackSessionBufferingStartedEventArgs>{ 0xCD6AAFED,0x74E2,0x43B5,{ 0xB1,0x15,0x76,0x23,0x6C,0x33,0x79,0x1A } }; // CD6AAFED-74E2-43B5-B115-76236C33791A
    template <> inline constexpr guid guid_v<winrt::Windows::Media::Playback::IMediaPlaybackSessionOutputDegradationPolicyState>{ 0x558E727D,0xF633,0x49F9,{ 0x96,0x5A,0xAB,0xAA,0x1D,0xB7,0x09,0xBE } }; // 558E727D-F633-49F9-965A-ABAA1DB709BE
    template <> inline constexpr guid guid_v<winrt::Windows::Media::Playback::IMediaPlaybackSource>{ 0xEF9DC2BC,0x9317,0x4696,{ 0xB0,0x51,0x2B,0xAD,0x64,0x31,0x77,0xB5 } }; // EF9DC2BC-9317-4696-B051-2BAD643177B5
    template <> inline constexpr guid guid_v<winrt::Windows::Media::Playback::IMediaPlaybackSphericalVideoProjection>{ 0xD405B37C,0x6F0E,0x4661,{ 0xB8,0xEE,0xD4,0x87,0xBA,0x97,0x52,0xD5 } }; // D405B37C-6F0E-4661-B8EE-D487BA9752D5
    template <> inline constexpr guid guid_v<winrt::Windows::Media::Playback::IMediaPlaybackTimedMetadataTrackList>{ 0x72B41319,0xBBFB,0x46A3,{ 0x93,0x72,0x9C,0x9C,0x74,0x4B,0x94,0x38 } }; // 72B41319-BBFB-46A3-9372-9C9C744B9438
    template <> inline constexpr guid guid_v<winrt::Windows::Media::Playback::IMediaPlayer>{ 0x381A83CB,0x6FFF,0x499B,{ 0x8D,0x64,0x28,0x85,0xDF,0xC1,0x24,0x9E } }; // 381A83CB-6FFF-499B-8D64-2885DFC1249E
    template <> inline constexpr guid guid_v<winrt::Windows::Media::Playback::IMediaPlayer2>{ 0x3C841218,0x2123,0x4FC5,{ 0x90,0x82,0x2F,0x88,0x3F,0x77,0xBD,0xF5 } }; // 3C841218-2123-4FC5-9082-2F883F77BDF5
    template <> inline constexpr guid guid_v<winrt::Windows::Media::Playback::IMediaPlayer3>{ 0xEE0660DA,0x031B,0x4FEB,{ 0xBD,0x9B,0x92,0xE0,0xA0,0xA8,0xD2,0x99 } }; // EE0660DA-031B-4FEB-BD9B-92E0A0A8D299
    template <> inline constexpr guid guid_v<winrt::Windows::Media::Playback::IMediaPlayer4>{ 0x80035DB0,0x7448,0x4770,{ 0xAF,0xCF,0x2A,0x57,0x45,0x09,0x14,0xC5 } }; // 80035DB0-7448-4770-AFCF-2A57450914C5
    template <> inline constexpr guid guid_v<winrt::Windows::Media::Playback::IMediaPlayer5>{ 0xCFE537FD,0xF86A,0x4446,{ 0xBF,0x4D,0xC8,0xE7,0x92,0xB7,0xB4,0xB3 } }; // CFE537FD-F86A-4446-BF4D-C8E792B7B4B3
    template <> inline constexpr guid guid_v<winrt::Windows::Media::Playback::IMediaPlayer6>{ 0xE0CAA086,0xAE65,0x414C,{ 0xB0,0x10,0x8B,0xC5,0x5F,0x00,0xE6,0x92 } }; // E0CAA086-AE65-414C-B010-8BC55F00E692
    template <> inline constexpr guid guid_v<winrt::Windows::Media::Playback::IMediaPlayer7>{ 0x5D1DC478,0x4500,0x4531,{ 0xB3,0xF4,0x77,0x7A,0x71,0x49,0x1F,0x7F } }; // 5D1DC478-4500-4531-B3F4-777A71491F7F
    template <> inline constexpr guid guid_v<winrt::Windows::Media::Playback::IMediaPlayerDataReceivedEventArgs>{ 0xC75A9405,0xC801,0x412A,{ 0x83,0x5B,0x83,0xFC,0x0E,0x62,0x2A,0x8E } }; // C75A9405-C801-412A-835B-83FC0E622A8E
    template <> inline constexpr guid guid_v<winrt::Windows::Media::Playback::IMediaPlayerEffects>{ 0x85A1DEDA,0xCAB6,0x4CC0,{ 0x8B,0xE3,0x60,0x35,0xF4,0xDE,0x25,0x91 } }; // 85A1DEDA-CAB6-4CC0-8BE3-6035F4DE2591
    template <> inline constexpr guid guid_v<winrt::Windows::Media::Playback::IMediaPlayerEffects2>{ 0xFA419A79,0x1BBE,0x46C5,{ 0xAE,0x1F,0x8E,0xE6,0x9F,0xB3,0xC2,0xC7 } }; // FA419A79-1BBE-46C5-AE1F-8EE69FB3C2C7
    template <> inline constexpr guid guid_v<winrt::Windows::Media::Playback::IMediaPlayerFailedEventArgs>{ 0x2744E9B9,0xA7E3,0x4F16,{ 0xBA,0xC4,0x79,0x14,0xEB,0xC0,0x83,0x01 } }; // 2744E9B9-A7E3-4F16-BAC4-7914EBC08301
    template <> inline constexpr guid guid_v<winrt::Windows::Media::Playback::IMediaPlayerRateChangedEventArgs>{ 0x40600D58,0x3B61,0x4BB2,{ 0x98,0x9F,0xFC,0x65,0x60,0x8B,0x6C,0xAB } }; // 40600D58-3B61-4BB2-989F-FC65608B6CAB
    template <> inline constexpr guid guid_v<winrt::Windows::Media::Playback::IMediaPlayerSource>{ 0xBD4F8897,0x1423,0x4C3E,{ 0x82,0xC5,0x0F,0xB1,0xAF,0x94,0xF7,0x15 } }; // BD4F8897-1423-4C3E-82C5-0FB1AF94F715
    template <> inline constexpr guid guid_v<winrt::Windows::Media::Playback::IMediaPlayerSource2>{ 0x82449B9F,0x7322,0x4C0B,{ 0xB0,0x3B,0x3E,0x69,0xA4,0x82,0x60,0xC5 } }; // 82449B9F-7322-4C0B-B03B-3E69A48260C5
    template <> inline constexpr guid guid_v<winrt::Windows::Media::Playback::IMediaPlayerSurface>{ 0x0ED653BC,0xB736,0x49C3,{ 0x83,0x0B,0x76,0x4A,0x38,0x45,0x31,0x3A } }; // 0ED653BC-B736-49C3-830B-764A3845313A
    template <> inline constexpr guid guid_v<winrt::Windows::Media::Playback::IPlaybackMediaMarker>{ 0xC4D22F5C,0x3C1C,0x4444,{ 0xB6,0xB9,0x77,0x8B,0x04,0x22,0xD4,0x1A } }; // C4D22F5C-3C1C-4444-B6B9-778B0422D41A
    template <> inline constexpr guid guid_v<winrt::Windows::Media::Playback::IPlaybackMediaMarkerFactory>{ 0x8C530A78,0xE0AE,0x4E1A,{ 0xA8,0xC8,0xE2,0x3F,0x98,0x2A,0x93,0x7B } }; // 8C530A78-E0AE-4E1A-A8C8-E23F982A937B
    template <> inline constexpr guid guid_v<winrt::Windows::Media::Playback::IPlaybackMediaMarkerReachedEventArgs>{ 0x578CD1B9,0x90E2,0x4E60,{ 0xAB,0xC4,0x87,0x40,0xB0,0x1F,0x61,0x96 } }; // 578CD1B9-90E2-4E60-ABC4-8740B01F6196
    template <> inline constexpr guid guid_v<winrt::Windows::Media::Playback::IPlaybackMediaMarkerSequence>{ 0xF2810CEE,0x638B,0x46CF,{ 0x88,0x17,0x1D,0x11,0x1F,0xE9,0xD8,0xC4 } }; // F2810CEE-638B-46CF-8817-1D111FE9D8C4
    template <> inline constexpr guid guid_v<winrt::Windows::Media::Playback::ITimedMetadataPresentationModeChangedEventArgs>{ 0xD1636099,0x65DF,0x45AE,{ 0x8C,0xEF,0xDC,0x0B,0x53,0xFD,0xC2,0xBB } }; // D1636099-65DF-45AE-8CEF-DC0B53FDC2BB
    template <> struct default_interface<winrt::Windows::Media::Playback::CurrentMediaPlaybackItemChangedEventArgs>{ using type = winrt::Windows::Media::Playback::ICurrentMediaPlaybackItemChangedEventArgs; };
    template <> struct default_interface<winrt::Windows::Media::Playback::MediaBreak>{ using type = winrt::Windows::Media::Playback::IMediaBreak; };
    template <> struct default_interface<winrt::Windows::Media::Playback::MediaBreakEndedEventArgs>{ using type = winrt::Windows::Media::Playback::IMediaBreakEndedEventArgs; };
    template <> struct default_interface<winrt::Windows::Media::Playback::MediaBreakManager>{ using type = winrt::Windows::Media::Playback::IMediaBreakManager; };
    template <> struct default_interface<winrt::Windows::Media::Playback::MediaBreakSchedule>{ using type = winrt::Windows::Media::Playback::IMediaBreakSchedule; };
    template <> struct default_interface<winrt::Windows::Media::Playback::MediaBreakSeekedOverEventArgs>{ using type = winrt::Windows::Media::Playback::IMediaBreakSeekedOverEventArgs; };
    template <> struct default_interface<winrt::Windows::Media::Playback::MediaBreakSkippedEventArgs>{ using type = winrt::Windows::Media::Playback::IMediaBreakSkippedEventArgs; };
    template <> struct default_interface<winrt::Windows::Media::Playback::MediaBreakStartedEventArgs>{ using type = winrt::Windows::Media::Playback::IMediaBreakStartedEventArgs; };
    template <> struct default_interface<winrt::Windows::Media::Playback::MediaItemDisplayProperties>{ using type = winrt::Windows::Media::Playback::IMediaItemDisplayProperties; };
    template <> struct default_interface<winrt::Windows::Media::Playback::MediaPlaybackAudioTrackList>{ using type = winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Media::Core::AudioTrack>; };
    template <> struct default_interface<winrt::Windows::Media::Playback::MediaPlaybackCommandManager>{ using type = winrt::Windows::Media::Playback::IMediaPlaybackCommandManager; };
    template <> struct default_interface<winrt::Windows::Media::Playback::MediaPlaybackCommandManagerAutoRepeatModeReceivedEventArgs>{ using type = winrt::Windows::Media::Playback::IMediaPlaybackCommandManagerAutoRepeatModeReceivedEventArgs; };
    template <> struct default_interface<winrt::Windows::Media::Playback::MediaPlaybackCommandManagerCommandBehavior>{ using type = winrt::Windows::Media::Playback::IMediaPlaybackCommandManagerCommandBehavior; };
    template <> struct default_interface<winrt::Windows::Media::Playback::MediaPlaybackCommandManagerFastForwardReceivedEventArgs>{ using type = winrt::Windows::Media::Playback::IMediaPlaybackCommandManagerFastForwardReceivedEventArgs; };
    template <> struct default_interface<winrt::Windows::Media::Playback::MediaPlaybackCommandManagerNextReceivedEventArgs>{ using type = winrt::Windows::Media::Playback::IMediaPlaybackCommandManagerNextReceivedEventArgs; };
    template <> struct default_interface<winrt::Windows::Media::Playback::MediaPlaybackCommandManagerPauseReceivedEventArgs>{ using type = winrt::Windows::Media::Playback::IMediaPlaybackCommandManagerPauseReceivedEventArgs; };
    template <> struct default_interface<winrt::Windows::Media::Playback::MediaPlaybackCommandManagerPlayReceivedEventArgs>{ using type = winrt::Windows::Media::Playback::IMediaPlaybackCommandManagerPlayReceivedEventArgs; };
    template <> struct default_interface<winrt::Windows::Media::Playback::MediaPlaybackCommandManagerPositionReceivedEventArgs>{ using type = winrt::Windows::Media::Playback::IMediaPlaybackCommandManagerPositionReceivedEventArgs; };
    template <> struct default_interface<winrt::Windows::Media::Playback::MediaPlaybackCommandManagerPreviousReceivedEventArgs>{ using type = winrt::Windows::Media::Playback::IMediaPlaybackCommandManagerPreviousReceivedEventArgs; };
    template <> struct default_interface<winrt::Windows::Media::Playback::MediaPlaybackCommandManagerRateReceivedEventArgs>{ using type = winrt::Windows::Media::Playback::IMediaPlaybackCommandManagerRateReceivedEventArgs; };
    template <> struct default_interface<winrt::Windows::Media::Playback::MediaPlaybackCommandManagerRewindReceivedEventArgs>{ using type = winrt::Windows::Media::Playback::IMediaPlaybackCommandManagerRewindReceivedEventArgs; };
    template <> struct default_interface<winrt::Windows::Media::Playback::MediaPlaybackCommandManagerShuffleReceivedEventArgs>{ using type = winrt::Windows::Media::Playback::IMediaPlaybackCommandManagerShuffleReceivedEventArgs; };
    template <> struct default_interface<winrt::Windows::Media::Playback::MediaPlaybackItem>{ using type = winrt::Windows::Media::Playback::IMediaPlaybackItem; };
    template <> struct default_interface<winrt::Windows::Media::Playback::MediaPlaybackItemError>{ using type = winrt::Windows::Media::Playback::IMediaPlaybackItemError; };
    template <> struct default_interface<winrt::Windows::Media::Playback::MediaPlaybackItemFailedEventArgs>{ using type = winrt::Windows::Media::Playback::IMediaPlaybackItemFailedEventArgs; };
    template <> struct default_interface<winrt::Windows::Media::Playback::MediaPlaybackItemOpenedEventArgs>{ using type = winrt::Windows::Media::Playback::IMediaPlaybackItemOpenedEventArgs; };
    template <> struct default_interface<winrt::Windows::Media::Playback::MediaPlaybackList>{ using type = winrt::Windows::Media::Playback::IMediaPlaybackList; };
    template <> struct default_interface<winrt::Windows::Media::Playback::MediaPlaybackSession>{ using type = winrt::Windows::Media::Playback::IMediaPlaybackSession; };
    template <> struct default_interface<winrt::Windows::Media::Playback::MediaPlaybackSessionBufferingStartedEventArgs>{ using type = winrt::Windows::Media::Playback::IMediaPlaybackSessionBufferingStartedEventArgs; };
    template <> struct default_interface<winrt::Windows::Media::Playback::MediaPlaybackSessionOutputDegradationPolicyState>{ using type = winrt::Windows::Media::Playback::IMediaPlaybackSessionOutputDegradationPolicyState; };
    template <> struct default_interface<winrt::Windows::Media::Playback::MediaPlaybackSphericalVideoProjection>{ using type = winrt::Windows::Media::Playback::IMediaPlaybackSphericalVideoProjection; };
    template <> struct default_interface<winrt::Windows::Media::Playback::MediaPlaybackTimedMetadataTrackList>{ using type = winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Media::Core::TimedMetadataTrack>; };
    template <> struct default_interface<winrt::Windows::Media::Playback::MediaPlaybackVideoTrackList>{ using type = winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Media::Core::VideoTrack>; };
    template <> struct default_interface<winrt::Windows::Media::Playback::MediaPlayer>{ using type = winrt::Windows::Media::Playback::IMediaPlayer; };
    template <> struct default_interface<winrt::Windows::Media::Playback::MediaPlayerDataReceivedEventArgs>{ using type = winrt::Windows::Media::Playback::IMediaPlayerDataReceivedEventArgs; };
    template <> struct default_interface<winrt::Windows::Media::Playback::MediaPlayerFailedEventArgs>{ using type = winrt::Windows::Media::Playback::IMediaPlayerFailedEventArgs; };
    template <> struct default_interface<winrt::Windows::Media::Playback::MediaPlayerRateChangedEventArgs>{ using type = winrt::Windows::Media::Playback::IMediaPlayerRateChangedEventArgs; };
    template <> struct default_interface<winrt::Windows::Media::Playback::MediaPlayerSurface>{ using type = winrt::Windows::Media::Playback::IMediaPlayerSurface; };
    template <> struct default_interface<winrt::Windows::Media::Playback::PlaybackMediaMarker>{ using type = winrt::Windows::Media::Playback::IPlaybackMediaMarker; };
    template <> struct default_interface<winrt::Windows::Media::Playback::PlaybackMediaMarkerReachedEventArgs>{ using type = winrt::Windows::Media::Playback::IPlaybackMediaMarkerReachedEventArgs; };
    template <> struct default_interface<winrt::Windows::Media::Playback::PlaybackMediaMarkerSequence>{ using type = winrt::Windows::Media::Playback::IPlaybackMediaMarkerSequence; };
    template <> struct default_interface<winrt::Windows::Media::Playback::TimedMetadataPresentationModeChangedEventArgs>{ using type = winrt::Windows::Media::Playback::ITimedMetadataPresentationModeChangedEventArgs; };
    template <> struct abi<winrt::Windows::Media::Playback::IBackgroundMediaPlayerStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Current(void**) noexcept = 0;
            virtual int32_t __stdcall add_MessageReceivedFromBackground(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_MessageReceivedFromBackground(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_MessageReceivedFromForeground(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_MessageReceivedFromForeground(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall SendMessageToBackground(void*) noexcept = 0;
            virtual int32_t __stdcall SendMessageToForeground(void*) noexcept = 0;
            virtual int32_t __stdcall IsMediaPlaying(bool*) noexcept = 0;
            virtual int32_t __stdcall Shutdown() noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Media::Playback::ICurrentMediaPlaybackItemChangedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_NewItem(void**) noexcept = 0;
            virtual int32_t __stdcall get_OldItem(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Media::Playback::ICurrentMediaPlaybackItemChangedEventArgs2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Reason(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Media::Playback::IMediaBreak>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_PlaybackList(void**) noexcept = 0;
            virtual int32_t __stdcall get_PresentationPosition(void**) noexcept = 0;
            virtual int32_t __stdcall get_InsertionMethod(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_CustomProperties(void**) noexcept = 0;
            virtual int32_t __stdcall get_CanStart(bool*) noexcept = 0;
            virtual int32_t __stdcall put_CanStart(bool) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Media::Playback::IMediaBreakEndedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_MediaBreak(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Media::Playback::IMediaBreakFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Create(int32_t, void**) noexcept = 0;
            virtual int32_t __stdcall CreateWithPresentationPosition(int32_t, int64_t, void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Media::Playback::IMediaBreakManager>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall add_BreaksSeekedOver(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_BreaksSeekedOver(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_BreakStarted(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_BreakStarted(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_BreakEnded(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_BreakEnded(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_BreakSkipped(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_BreakSkipped(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall get_CurrentBreak(void**) noexcept = 0;
            virtual int32_t __stdcall get_PlaybackSession(void**) noexcept = 0;
            virtual int32_t __stdcall PlayBreak(void*) noexcept = 0;
            virtual int32_t __stdcall SkipCurrentBreak() noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Media::Playback::IMediaBreakSchedule>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall add_ScheduleChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_ScheduleChanged(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall InsertMidrollBreak(void*) noexcept = 0;
            virtual int32_t __stdcall RemoveMidrollBreak(void*) noexcept = 0;
            virtual int32_t __stdcall get_MidrollBreaks(void**) noexcept = 0;
            virtual int32_t __stdcall put_PrerollBreak(void*) noexcept = 0;
            virtual int32_t __stdcall get_PrerollBreak(void**) noexcept = 0;
            virtual int32_t __stdcall put_PostrollBreak(void*) noexcept = 0;
            virtual int32_t __stdcall get_PostrollBreak(void**) noexcept = 0;
            virtual int32_t __stdcall get_PlaybackItem(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Media::Playback::IMediaBreakSeekedOverEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_SeekedOverBreaks(void**) noexcept = 0;
            virtual int32_t __stdcall get_OldPosition(int64_t*) noexcept = 0;
            virtual int32_t __stdcall get_NewPosition(int64_t*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Media::Playback::IMediaBreakSkippedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_MediaBreak(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Media::Playback::IMediaBreakStartedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_MediaBreak(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Media::Playback::IMediaEnginePlaybackSource>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_CurrentItem(void**) noexcept = 0;
            virtual int32_t __stdcall SetPlaybackSource(void*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Media::Playback::IMediaItemDisplayProperties>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Type(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_Type(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_MusicProperties(void**) noexcept = 0;
            virtual int32_t __stdcall get_VideoProperties(void**) noexcept = 0;
            virtual int32_t __stdcall get_Thumbnail(void**) noexcept = 0;
            virtual int32_t __stdcall put_Thumbnail(void*) noexcept = 0;
            virtual int32_t __stdcall ClearAll() noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Media::Playback::IMediaPlaybackCommandManager>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_IsEnabled(bool*) noexcept = 0;
            virtual int32_t __stdcall put_IsEnabled(bool) noexcept = 0;
            virtual int32_t __stdcall get_MediaPlayer(void**) noexcept = 0;
            virtual int32_t __stdcall get_PlayBehavior(void**) noexcept = 0;
            virtual int32_t __stdcall get_PauseBehavior(void**) noexcept = 0;
            virtual int32_t __stdcall get_NextBehavior(void**) noexcept = 0;
            virtual int32_t __stdcall get_PreviousBehavior(void**) noexcept = 0;
            virtual int32_t __stdcall get_FastForwardBehavior(void**) noexcept = 0;
            virtual int32_t __stdcall get_RewindBehavior(void**) noexcept = 0;
            virtual int32_t __stdcall get_ShuffleBehavior(void**) noexcept = 0;
            virtual int32_t __stdcall get_AutoRepeatModeBehavior(void**) noexcept = 0;
            virtual int32_t __stdcall get_PositionBehavior(void**) noexcept = 0;
            virtual int32_t __stdcall get_RateBehavior(void**) noexcept = 0;
            virtual int32_t __stdcall add_PlayReceived(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_PlayReceived(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_PauseReceived(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_PauseReceived(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_NextReceived(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_NextReceived(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_PreviousReceived(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_PreviousReceived(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_FastForwardReceived(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_FastForwardReceived(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_RewindReceived(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_RewindReceived(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_ShuffleReceived(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_ShuffleReceived(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_AutoRepeatModeReceived(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_AutoRepeatModeReceived(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_PositionReceived(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_PositionReceived(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_RateReceived(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_RateReceived(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Media::Playback::IMediaPlaybackCommandManagerAutoRepeatModeReceivedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Handled(bool*) noexcept = 0;
            virtual int32_t __stdcall put_Handled(bool) noexcept = 0;
            virtual int32_t __stdcall get_AutoRepeatMode(int32_t*) noexcept = 0;
            virtual int32_t __stdcall GetDeferral(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Media::Playback::IMediaPlaybackCommandManagerCommandBehavior>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_CommandManager(void**) noexcept = 0;
            virtual int32_t __stdcall get_IsEnabled(bool*) noexcept = 0;
            virtual int32_t __stdcall get_EnablingRule(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_EnablingRule(int32_t) noexcept = 0;
            virtual int32_t __stdcall add_IsEnabledChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_IsEnabledChanged(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Media::Playback::IMediaPlaybackCommandManagerFastForwardReceivedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Handled(bool*) noexcept = 0;
            virtual int32_t __stdcall put_Handled(bool) noexcept = 0;
            virtual int32_t __stdcall GetDeferral(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Media::Playback::IMediaPlaybackCommandManagerNextReceivedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Handled(bool*) noexcept = 0;
            virtual int32_t __stdcall put_Handled(bool) noexcept = 0;
            virtual int32_t __stdcall GetDeferral(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Media::Playback::IMediaPlaybackCommandManagerPauseReceivedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Handled(bool*) noexcept = 0;
            virtual int32_t __stdcall put_Handled(bool) noexcept = 0;
            virtual int32_t __stdcall GetDeferral(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Media::Playback::IMediaPlaybackCommandManagerPlayReceivedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Handled(bool*) noexcept = 0;
            virtual int32_t __stdcall put_Handled(bool) noexcept = 0;
            virtual int32_t __stdcall GetDeferral(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Media::Playback::IMediaPlaybackCommandManagerPositionReceivedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Handled(bool*) noexcept = 0;
            virtual int32_t __stdcall put_Handled(bool) noexcept = 0;
            virtual int32_t __stdcall get_Position(int64_t*) noexcept = 0;
            virtual int32_t __stdcall GetDeferral(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Media::Playback::IMediaPlaybackCommandManagerPreviousReceivedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Handled(bool*) noexcept = 0;
            virtual int32_t __stdcall put_Handled(bool) noexcept = 0;
            virtual int32_t __stdcall GetDeferral(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Media::Playback::IMediaPlaybackCommandManagerRateReceivedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Handled(bool*) noexcept = 0;
            virtual int32_t __stdcall put_Handled(bool) noexcept = 0;
            virtual int32_t __stdcall get_PlaybackRate(double*) noexcept = 0;
            virtual int32_t __stdcall GetDeferral(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Media::Playback::IMediaPlaybackCommandManagerRewindReceivedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Handled(bool*) noexcept = 0;
            virtual int32_t __stdcall put_Handled(bool) noexcept = 0;
            virtual int32_t __stdcall GetDeferral(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Media::Playback::IMediaPlaybackCommandManagerShuffleReceivedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Handled(bool*) noexcept = 0;
            virtual int32_t __stdcall put_Handled(bool) noexcept = 0;
            virtual int32_t __stdcall get_IsShuffleRequested(bool*) noexcept = 0;
            virtual int32_t __stdcall GetDeferral(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Media::Playback::IMediaPlaybackItem>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall add_AudioTracksChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_AudioTracksChanged(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_VideoTracksChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_VideoTracksChanged(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_TimedMetadataTracksChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_TimedMetadataTracksChanged(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall get_Source(void**) noexcept = 0;
            virtual int32_t __stdcall get_AudioTracks(void**) noexcept = 0;
            virtual int32_t __stdcall get_VideoTracks(void**) noexcept = 0;
            virtual int32_t __stdcall get_TimedMetadataTracks(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Media::Playback::IMediaPlaybackItem2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_BreakSchedule(void**) noexcept = 0;
            virtual int32_t __stdcall get_StartTime(int64_t*) noexcept = 0;
            virtual int32_t __stdcall get_DurationLimit(void**) noexcept = 0;
            virtual int32_t __stdcall get_CanSkip(bool*) noexcept = 0;
            virtual int32_t __stdcall put_CanSkip(bool) noexcept = 0;
            virtual int32_t __stdcall GetDisplayProperties(void**) noexcept = 0;
            virtual int32_t __stdcall ApplyDisplayProperties(void*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Media::Playback::IMediaPlaybackItem3>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_IsDisabledInPlaybackList(bool*) noexcept = 0;
            virtual int32_t __stdcall put_IsDisabledInPlaybackList(bool) noexcept = 0;
            virtual int32_t __stdcall get_TotalDownloadProgress(double*) noexcept = 0;
            virtual int32_t __stdcall get_AutoLoadedDisplayProperties(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_AutoLoadedDisplayProperties(int32_t) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Media::Playback::IMediaPlaybackItemError>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ErrorCode(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_ExtendedError(winrt::hresult*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Media::Playback::IMediaPlaybackItemFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Create(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Media::Playback::IMediaPlaybackItemFactory2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateWithStartTime(void*, int64_t, void**) noexcept = 0;
            virtual int32_t __stdcall CreateWithStartTimeAndDurationLimit(void*, int64_t, int64_t, void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Media::Playback::IMediaPlaybackItemFailedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Item(void**) noexcept = 0;
            virtual int32_t __stdcall get_Error(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Media::Playback::IMediaPlaybackItemOpenedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Item(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Media::Playback::IMediaPlaybackItemStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall FindFromMediaSource(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Media::Playback::IMediaPlaybackList>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall add_ItemFailed(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_ItemFailed(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_CurrentItemChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_CurrentItemChanged(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_ItemOpened(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_ItemOpened(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall get_Items(void**) noexcept = 0;
            virtual int32_t __stdcall get_AutoRepeatEnabled(bool*) noexcept = 0;
            virtual int32_t __stdcall put_AutoRepeatEnabled(bool) noexcept = 0;
            virtual int32_t __stdcall get_ShuffleEnabled(bool*) noexcept = 0;
            virtual int32_t __stdcall put_ShuffleEnabled(bool) noexcept = 0;
            virtual int32_t __stdcall get_CurrentItem(void**) noexcept = 0;
            virtual int32_t __stdcall get_CurrentItemIndex(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall MoveNext(void**) noexcept = 0;
            virtual int32_t __stdcall MovePrevious(void**) noexcept = 0;
            virtual int32_t __stdcall MoveTo(uint32_t, void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Media::Playback::IMediaPlaybackList2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_MaxPrefetchTime(void**) noexcept = 0;
            virtual int32_t __stdcall put_MaxPrefetchTime(void*) noexcept = 0;
            virtual int32_t __stdcall get_StartingItem(void**) noexcept = 0;
            virtual int32_t __stdcall put_StartingItem(void*) noexcept = 0;
            virtual int32_t __stdcall get_ShuffledItems(void**) noexcept = 0;
            virtual int32_t __stdcall SetShuffledItems(void*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Media::Playback::IMediaPlaybackList3>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_MaxPlayedItemsToKeepOpen(void**) noexcept = 0;
            virtual int32_t __stdcall put_MaxPlayedItemsToKeepOpen(void*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Media::Playback::IMediaPlaybackSession>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall add_PlaybackStateChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_PlaybackStateChanged(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_PlaybackRateChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_PlaybackRateChanged(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_SeekCompleted(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_SeekCompleted(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_BufferingStarted(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_BufferingStarted(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_BufferingEnded(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_BufferingEnded(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_BufferingProgressChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_BufferingProgressChanged(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_DownloadProgressChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_DownloadProgressChanged(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_NaturalDurationChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_NaturalDurationChanged(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_PositionChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_PositionChanged(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_NaturalVideoSizeChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_NaturalVideoSizeChanged(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall get_MediaPlayer(void**) noexcept = 0;
            virtual int32_t __stdcall get_NaturalDuration(int64_t*) noexcept = 0;
            virtual int32_t __stdcall get_Position(int64_t*) noexcept = 0;
            virtual int32_t __stdcall put_Position(int64_t) noexcept = 0;
            virtual int32_t __stdcall get_PlaybackState(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_CanSeek(bool*) noexcept = 0;
            virtual int32_t __stdcall get_CanPause(bool*) noexcept = 0;
            virtual int32_t __stdcall get_IsProtected(bool*) noexcept = 0;
            virtual int32_t __stdcall get_PlaybackRate(double*) noexcept = 0;
            virtual int32_t __stdcall put_PlaybackRate(double) noexcept = 0;
            virtual int32_t __stdcall get_BufferingProgress(double*) noexcept = 0;
            virtual int32_t __stdcall get_DownloadProgress(double*) noexcept = 0;
            virtual int32_t __stdcall get_NaturalVideoHeight(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_NaturalVideoWidth(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_NormalizedSourceRect(winrt::Windows::Foundation::Rect*) noexcept = 0;
            virtual int32_t __stdcall put_NormalizedSourceRect(winrt::Windows::Foundation::Rect) noexcept = 0;
            virtual int32_t __stdcall get_StereoscopicVideoPackingMode(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_StereoscopicVideoPackingMode(int32_t) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Media::Playback::IMediaPlaybackSession2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall add_BufferedRangesChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_BufferedRangesChanged(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_PlayedRangesChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_PlayedRangesChanged(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_SeekableRangesChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_SeekableRangesChanged(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_SupportedPlaybackRatesChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_SupportedPlaybackRatesChanged(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall get_SphericalVideoProjection(void**) noexcept = 0;
            virtual int32_t __stdcall get_IsMirroring(bool*) noexcept = 0;
            virtual int32_t __stdcall put_IsMirroring(bool) noexcept = 0;
            virtual int32_t __stdcall GetBufferedRanges(void**) noexcept = 0;
            virtual int32_t __stdcall GetPlayedRanges(void**) noexcept = 0;
            virtual int32_t __stdcall GetSeekableRanges(void**) noexcept = 0;
            virtual int32_t __stdcall IsSupportedPlaybackRateRange(double, double, bool*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Media::Playback::IMediaPlaybackSession3>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_PlaybackRotation(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_PlaybackRotation(int32_t) noexcept = 0;
            virtual int32_t __stdcall GetOutputDegradationPolicyState(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Media::Playback::IMediaPlaybackSessionBufferingStartedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_IsPlaybackInterruption(bool*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Media::Playback::IMediaPlaybackSessionOutputDegradationPolicyState>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_VideoConstrictionReason(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Media::Playback::IMediaPlaybackSource>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<winrt::Windows::Media::Playback::IMediaPlaybackSphericalVideoProjection>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_IsEnabled(bool*) noexcept = 0;
            virtual int32_t __stdcall put_IsEnabled(bool) noexcept = 0;
            virtual int32_t __stdcall get_FrameFormat(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_FrameFormat(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_HorizontalFieldOfViewInDegrees(double*) noexcept = 0;
            virtual int32_t __stdcall put_HorizontalFieldOfViewInDegrees(double) noexcept = 0;
            virtual int32_t __stdcall get_ViewOrientation(winrt::Windows::Foundation::Numerics::quaternion*) noexcept = 0;
            virtual int32_t __stdcall put_ViewOrientation(winrt::Windows::Foundation::Numerics::quaternion) noexcept = 0;
            virtual int32_t __stdcall get_ProjectionMode(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_ProjectionMode(int32_t) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Media::Playback::IMediaPlaybackTimedMetadataTrackList>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall add_PresentationModeChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_PresentationModeChanged(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall GetPresentationMode(uint32_t, int32_t*) noexcept = 0;
            virtual int32_t __stdcall SetPresentationMode(uint32_t, int32_t) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Media::Playback::IMediaPlayer>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_AutoPlay(bool*) noexcept = 0;
            virtual int32_t __stdcall put_AutoPlay(bool) noexcept = 0;
            virtual int32_t __stdcall get_NaturalDuration(int64_t*) noexcept = 0;
            virtual int32_t __stdcall get_Position(int64_t*) noexcept = 0;
            virtual int32_t __stdcall put_Position(int64_t) noexcept = 0;
            virtual int32_t __stdcall get_BufferingProgress(double*) noexcept = 0;
            virtual int32_t __stdcall get_CurrentState(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_CanSeek(bool*) noexcept = 0;
            virtual int32_t __stdcall get_CanPause(bool*) noexcept = 0;
            virtual int32_t __stdcall get_IsLoopingEnabled(bool*) noexcept = 0;
            virtual int32_t __stdcall put_IsLoopingEnabled(bool) noexcept = 0;
            virtual int32_t __stdcall get_IsProtected(bool*) noexcept = 0;
            virtual int32_t __stdcall get_IsMuted(bool*) noexcept = 0;
            virtual int32_t __stdcall put_IsMuted(bool) noexcept = 0;
            virtual int32_t __stdcall get_PlaybackRate(double*) noexcept = 0;
            virtual int32_t __stdcall put_PlaybackRate(double) noexcept = 0;
            virtual int32_t __stdcall get_Volume(double*) noexcept = 0;
            virtual int32_t __stdcall put_Volume(double) noexcept = 0;
            virtual int32_t __stdcall get_PlaybackMediaMarkers(void**) noexcept = 0;
            virtual int32_t __stdcall add_MediaOpened(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_MediaOpened(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_MediaEnded(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_MediaEnded(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_MediaFailed(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_MediaFailed(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_CurrentStateChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_CurrentStateChanged(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_PlaybackMediaMarkerReached(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_PlaybackMediaMarkerReached(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_MediaPlayerRateChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_MediaPlayerRateChanged(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_VolumeChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_VolumeChanged(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_SeekCompleted(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_SeekCompleted(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_BufferingStarted(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_BufferingStarted(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_BufferingEnded(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_BufferingEnded(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall Play() noexcept = 0;
            virtual int32_t __stdcall Pause() noexcept = 0;
            virtual int32_t __stdcall SetUriSource(void*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Media::Playback::IMediaPlayer2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_SystemMediaTransportControls(void**) noexcept = 0;
            virtual int32_t __stdcall get_AudioCategory(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_AudioCategory(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_AudioDeviceType(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_AudioDeviceType(int32_t) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Media::Playback::IMediaPlayer3>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall add_IsMutedChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_IsMutedChanged(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_SourceChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_SourceChanged(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall get_AudioBalance(double*) noexcept = 0;
            virtual int32_t __stdcall put_AudioBalance(double) noexcept = 0;
            virtual int32_t __stdcall get_RealTimePlayback(bool*) noexcept = 0;
            virtual int32_t __stdcall put_RealTimePlayback(bool) noexcept = 0;
            virtual int32_t __stdcall get_StereoscopicVideoRenderMode(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_StereoscopicVideoRenderMode(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_BreakManager(void**) noexcept = 0;
            virtual int32_t __stdcall get_CommandManager(void**) noexcept = 0;
            virtual int32_t __stdcall get_AudioDevice(void**) noexcept = 0;
            virtual int32_t __stdcall put_AudioDevice(void*) noexcept = 0;
            virtual int32_t __stdcall get_TimelineController(void**) noexcept = 0;
            virtual int32_t __stdcall put_TimelineController(void*) noexcept = 0;
            virtual int32_t __stdcall get_TimelineControllerPositionOffset(int64_t*) noexcept = 0;
            virtual int32_t __stdcall put_TimelineControllerPositionOffset(int64_t) noexcept = 0;
            virtual int32_t __stdcall get_PlaybackSession(void**) noexcept = 0;
            virtual int32_t __stdcall StepForwardOneFrame() noexcept = 0;
            virtual int32_t __stdcall StepBackwardOneFrame() noexcept = 0;
            virtual int32_t __stdcall GetAsCastingSource(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Media::Playback::IMediaPlayer4>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall SetSurfaceSize(winrt::Windows::Foundation::Size) noexcept = 0;
            virtual int32_t __stdcall GetSurface(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Media::Playback::IMediaPlayer5>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall add_VideoFrameAvailable(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_VideoFrameAvailable(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall get_IsVideoFrameServerEnabled(bool*) noexcept = 0;
            virtual int32_t __stdcall put_IsVideoFrameServerEnabled(bool) noexcept = 0;
            virtual int32_t __stdcall CopyFrameToVideoSurface(void*) noexcept = 0;
            virtual int32_t __stdcall CopyFrameToVideoSurfaceWithTargetRectangle(void*, winrt::Windows::Foundation::Rect) noexcept = 0;
            virtual int32_t __stdcall CopyFrameToStereoscopicVideoSurfaces(void*, void*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Media::Playback::IMediaPlayer6>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall add_SubtitleFrameChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_SubtitleFrameChanged(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall RenderSubtitlesToSurface(void*, bool*) noexcept = 0;
            virtual int32_t __stdcall RenderSubtitlesToSurfaceWithTargetRectangle(void*, winrt::Windows::Foundation::Rect, bool*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Media::Playback::IMediaPlayer7>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_AudioStateMonitor(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Media::Playback::IMediaPlayerDataReceivedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Data(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Media::Playback::IMediaPlayerEffects>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall AddAudioEffect(void*, bool, void*) noexcept = 0;
            virtual int32_t __stdcall RemoveAllEffects() noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Media::Playback::IMediaPlayerEffects2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall AddVideoEffect(void*, bool, void*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Media::Playback::IMediaPlayerFailedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Error(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_ExtendedErrorCode(winrt::hresult*) noexcept = 0;
            virtual int32_t __stdcall get_ErrorMessage(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Media::Playback::IMediaPlayerRateChangedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_NewRate(double*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Media::Playback::IMediaPlayerSource>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ProtectionManager(void**) noexcept = 0;
            virtual int32_t __stdcall put_ProtectionManager(void*) noexcept = 0;
            virtual int32_t __stdcall SetFileSource(void*) noexcept = 0;
            virtual int32_t __stdcall SetStreamSource(void*) noexcept = 0;
            virtual int32_t __stdcall SetMediaSource(void*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Media::Playback::IMediaPlayerSource2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Source(void**) noexcept = 0;
            virtual int32_t __stdcall put_Source(void*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Media::Playback::IMediaPlayerSurface>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_CompositionSurface(void**) noexcept = 0;
            virtual int32_t __stdcall get_Compositor(void**) noexcept = 0;
            virtual int32_t __stdcall get_MediaPlayer(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Media::Playback::IPlaybackMediaMarker>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Time(int64_t*) noexcept = 0;
            virtual int32_t __stdcall get_MediaMarkerType(void**) noexcept = 0;
            virtual int32_t __stdcall get_Text(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Media::Playback::IPlaybackMediaMarkerFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateFromTime(int64_t, void**) noexcept = 0;
            virtual int32_t __stdcall Create(int64_t, void*, void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Media::Playback::IPlaybackMediaMarkerReachedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_PlaybackMediaMarker(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Media::Playback::IPlaybackMediaMarkerSequence>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Size(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall Insert(void*) noexcept = 0;
            virtual int32_t __stdcall Clear() noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Media::Playback::ITimedMetadataPresentationModeChangedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Track(void**) noexcept = 0;
            virtual int32_t __stdcall get_OldPresentationMode(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_NewPresentationMode(int32_t*) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Windows_Media_Playback_IBackgroundMediaPlayerStatics
    {
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Media::Playback::MediaPlayer) Current() const;
        WINRT_IMPL_AUTO(winrt::event_token) MessageReceivedFromBackground(winrt::Windows::Foundation::EventHandler<winrt::Windows::Media::Playback::MediaPlayerDataReceivedEventArgs> const& value) const;
        using MessageReceivedFromBackground_revoker = impl::event_revoker<winrt::Windows::Media::Playback::IBackgroundMediaPlayerStatics, &impl::abi_t<winrt::Windows::Media::Playback::IBackgroundMediaPlayerStatics>::remove_MessageReceivedFromBackground>;
        [[nodiscard]] MessageReceivedFromBackground_revoker MessageReceivedFromBackground(auto_revoke_t, winrt::Windows::Foundation::EventHandler<winrt::Windows::Media::Playback::MediaPlayerDataReceivedEventArgs> const& value) const;
        WINRT_IMPL_AUTO(void) MessageReceivedFromBackground(winrt::event_token const& token) const noexcept;
        WINRT_IMPL_AUTO(winrt::event_token) MessageReceivedFromForeground(winrt::Windows::Foundation::EventHandler<winrt::Windows::Media::Playback::MediaPlayerDataReceivedEventArgs> const& value) const;
        using MessageReceivedFromForeground_revoker = impl::event_revoker<winrt::Windows::Media::Playback::IBackgroundMediaPlayerStatics, &impl::abi_t<winrt::Windows::Media::Playback::IBackgroundMediaPlayerStatics>::remove_MessageReceivedFromForeground>;
        [[nodiscard]] MessageReceivedFromForeground_revoker MessageReceivedFromForeground(auto_revoke_t, winrt::Windows::Foundation::EventHandler<winrt::Windows::Media::Playback::MediaPlayerDataReceivedEventArgs> const& value) const;
        WINRT_IMPL_AUTO(void) MessageReceivedFromForeground(winrt::event_token const& token) const noexcept;
        WINRT_IMPL_AUTO(void) SendMessageToBackground(winrt::Windows::Foundation::Collections::ValueSet const& value) const;
        WINRT_IMPL_AUTO(void) SendMessageToForeground(winrt::Windows::Foundation::Collections::ValueSet const& value) const;
        WINRT_IMPL_AUTO(bool) IsMediaPlaying() const;
        WINRT_IMPL_AUTO(void) Shutdown() const;
    };
    template <> struct consume<winrt::Windows::Media::Playback::IBackgroundMediaPlayerStatics>
    {
        template <typename D> using type = consume_Windows_Media_Playback_IBackgroundMediaPlayerStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Playback_ICurrentMediaPlaybackItemChangedEventArgs
    {
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Media::Playback::MediaPlaybackItem) NewItem() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Media::Playback::MediaPlaybackItem) OldItem() const;
    };
    template <> struct consume<winrt::Windows::Media::Playback::ICurrentMediaPlaybackItemChangedEventArgs>
    {
        template <typename D> using type = consume_Windows_Media_Playback_ICurrentMediaPlaybackItemChangedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Playback_ICurrentMediaPlaybackItemChangedEventArgs2
    {
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Media::Playback::MediaPlaybackItemChangedReason) Reason() const;
    };
    template <> struct consume<winrt::Windows::Media::Playback::ICurrentMediaPlaybackItemChangedEventArgs2>
    {
        template <typename D> using type = consume_Windows_Media_Playback_ICurrentMediaPlaybackItemChangedEventArgs2<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Playback_IMediaBreak
    {
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Media::Playback::MediaPlaybackList) PlaybackList() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Foundation::IReference<winrt::Windows::Foundation::TimeSpan>) PresentationPosition() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Media::Playback::MediaBreakInsertionMethod) InsertionMethod() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Foundation::Collections::ValueSet) CustomProperties() const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) CanStart() const;
        WINRT_IMPL_AUTO(void) CanStart(bool value) const;
    };
    template <> struct consume<winrt::Windows::Media::Playback::IMediaBreak>
    {
        template <typename D> using type = consume_Windows_Media_Playback_IMediaBreak<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Playback_IMediaBreakEndedEventArgs
    {
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Media::Playback::MediaBreak) MediaBreak() const;
    };
    template <> struct consume<winrt::Windows::Media::Playback::IMediaBreakEndedEventArgs>
    {
        template <typename D> using type = consume_Windows_Media_Playback_IMediaBreakEndedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Playback_IMediaBreakFactory
    {
        WINRT_IMPL_AUTO(winrt::Windows::Media::Playback::MediaBreak) Create(winrt::Windows::Media::Playback::MediaBreakInsertionMethod const& insertionMethod) const;
        WINRT_IMPL_AUTO(winrt::Windows::Media::Playback::MediaBreak) CreateWithPresentationPosition(winrt::Windows::Media::Playback::MediaBreakInsertionMethod const& insertionMethod, winrt::Windows::Foundation::TimeSpan const& presentationPosition) const;
    };
    template <> struct consume<winrt::Windows::Media::Playback::IMediaBreakFactory>
    {
        template <typename D> using type = consume_Windows_Media_Playback_IMediaBreakFactory<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Playback_IMediaBreakManager
    {
        WINRT_IMPL_AUTO(winrt::event_token) BreaksSeekedOver(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Media::Playback::MediaBreakManager, winrt::Windows::Media::Playback::MediaBreakSeekedOverEventArgs> const& handler) const;
        using BreaksSeekedOver_revoker = impl::event_revoker<winrt::Windows::Media::Playback::IMediaBreakManager, &impl::abi_t<winrt::Windows::Media::Playback::IMediaBreakManager>::remove_BreaksSeekedOver>;
        [[nodiscard]] BreaksSeekedOver_revoker BreaksSeekedOver(auto_revoke_t, winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Media::Playback::MediaBreakManager, winrt::Windows::Media::Playback::MediaBreakSeekedOverEventArgs> const& handler) const;
        WINRT_IMPL_AUTO(void) BreaksSeekedOver(winrt::event_token const& token) const noexcept;
        WINRT_IMPL_AUTO(winrt::event_token) BreakStarted(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Media::Playback::MediaBreakManager, winrt::Windows::Media::Playback::MediaBreakStartedEventArgs> const& handler) const;
        using BreakStarted_revoker = impl::event_revoker<winrt::Windows::Media::Playback::IMediaBreakManager, &impl::abi_t<winrt::Windows::Media::Playback::IMediaBreakManager>::remove_BreakStarted>;
        [[nodiscard]] BreakStarted_revoker BreakStarted(auto_revoke_t, winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Media::Playback::MediaBreakManager, winrt::Windows::Media::Playback::MediaBreakStartedEventArgs> const& handler) const;
        WINRT_IMPL_AUTO(void) BreakStarted(winrt::event_token const& token) const noexcept;
        WINRT_IMPL_AUTO(winrt::event_token) BreakEnded(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Media::Playback::MediaBreakManager, winrt::Windows::Media::Playback::MediaBreakEndedEventArgs> const& handler) const;
        using BreakEnded_revoker = impl::event_revoker<winrt::Windows::Media::Playback::IMediaBreakManager, &impl::abi_t<winrt::Windows::Media::Playback::IMediaBreakManager>::remove_BreakEnded>;
        [[nodiscard]] BreakEnded_revoker BreakEnded(auto_revoke_t, winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Media::Playback::MediaBreakManager, winrt::Windows::Media::Playback::MediaBreakEndedEventArgs> const& handler) const;
        WINRT_IMPL_AUTO(void) BreakEnded(winrt::event_token const& token) const noexcept;
        WINRT_IMPL_AUTO(winrt::event_token) BreakSkipped(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Media::Playback::MediaBreakManager, winrt::Windows::Media::Playback::MediaBreakSkippedEventArgs> const& handler) const;
        using BreakSkipped_revoker = impl::event_revoker<winrt::Windows::Media::Playback::IMediaBreakManager, &impl::abi_t<winrt::Windows::Media::Playback::IMediaBreakManager>::remove_BreakSkipped>;
        [[nodiscard]] BreakSkipped_revoker BreakSkipped(auto_revoke_t, winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Media::Playback::MediaBreakManager, winrt::Windows::Media::Playback::MediaBreakSkippedEventArgs> const& handler) const;
        WINRT_IMPL_AUTO(void) BreakSkipped(winrt::event_token const& token) const noexcept;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Media::Playback::MediaBreak) CurrentBreak() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Media::Playback::MediaPlaybackSession) PlaybackSession() const;
        WINRT_IMPL_AUTO(void) PlayBreak(winrt::Windows::Media::Playback::MediaBreak const& value) const;
        WINRT_IMPL_AUTO(void) SkipCurrentBreak() const;
    };
    template <> struct consume<winrt::Windows::Media::Playback::IMediaBreakManager>
    {
        template <typename D> using type = consume_Windows_Media_Playback_IMediaBreakManager<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Playback_IMediaBreakSchedule
    {
        WINRT_IMPL_AUTO(winrt::event_token) ScheduleChanged(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Media::Playback::MediaBreakSchedule, winrt::Windows::Foundation::IInspectable> const& handler) const;
        using ScheduleChanged_revoker = impl::event_revoker<winrt::Windows::Media::Playback::IMediaBreakSchedule, &impl::abi_t<winrt::Windows::Media::Playback::IMediaBreakSchedule>::remove_ScheduleChanged>;
        [[nodiscard]] ScheduleChanged_revoker ScheduleChanged(auto_revoke_t, winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Media::Playback::MediaBreakSchedule, winrt::Windows::Foundation::IInspectable> const& handler) const;
        WINRT_IMPL_AUTO(void) ScheduleChanged(winrt::event_token const& token) const noexcept;
        WINRT_IMPL_AUTO(void) InsertMidrollBreak(winrt::Windows::Media::Playback::MediaBreak const& mediaBreak) const;
        WINRT_IMPL_AUTO(void) RemoveMidrollBreak(winrt::Windows::Media::Playback::MediaBreak const& mediaBreak) const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Media::Playback::MediaBreak>) MidrollBreaks() const;
        WINRT_IMPL_AUTO(void) PrerollBreak(winrt::Windows::Media::Playback::MediaBreak const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Media::Playback::MediaBreak) PrerollBreak() const;
        WINRT_IMPL_AUTO(void) PostrollBreak(winrt::Windows::Media::Playback::MediaBreak const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Media::Playback::MediaBreak) PostrollBreak() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Media::Playback::MediaPlaybackItem) PlaybackItem() const;
    };
    template <> struct consume<winrt::Windows::Media::Playback::IMediaBreakSchedule>
    {
        template <typename D> using type = consume_Windows_Media_Playback_IMediaBreakSchedule<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Playback_IMediaBreakSeekedOverEventArgs
    {
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Media::Playback::MediaBreak>) SeekedOverBreaks() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Foundation::TimeSpan) OldPosition() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Foundation::TimeSpan) NewPosition() const;
    };
    template <> struct consume<winrt::Windows::Media::Playback::IMediaBreakSeekedOverEventArgs>
    {
        template <typename D> using type = consume_Windows_Media_Playback_IMediaBreakSeekedOverEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Playback_IMediaBreakSkippedEventArgs
    {
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Media::Playback::MediaBreak) MediaBreak() const;
    };
    template <> struct consume<winrt::Windows::Media::Playback::IMediaBreakSkippedEventArgs>
    {
        template <typename D> using type = consume_Windows_Media_Playback_IMediaBreakSkippedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Playback_IMediaBreakStartedEventArgs
    {
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Media::Playback::MediaBreak) MediaBreak() const;
    };
    template <> struct consume<winrt::Windows::Media::Playback::IMediaBreakStartedEventArgs>
    {
        template <typename D> using type = consume_Windows_Media_Playback_IMediaBreakStartedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Playback_IMediaEnginePlaybackSource
    {
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Media::Playback::MediaPlaybackItem) CurrentItem() const;
        WINRT_IMPL_AUTO(void) SetPlaybackSource(winrt::Windows::Media::Playback::IMediaPlaybackSource const& source) const;
    };
    template <> struct consume<winrt::Windows::Media::Playback::IMediaEnginePlaybackSource>
    {
        template <typename D> using type = consume_Windows_Media_Playback_IMediaEnginePlaybackSource<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Playback_IMediaItemDisplayProperties
    {
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Media::MediaPlaybackType) Type() const;
        WINRT_IMPL_AUTO(void) Type(winrt::Windows::Media::MediaPlaybackType const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Media::MusicDisplayProperties) MusicProperties() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Media::VideoDisplayProperties) VideoProperties() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Storage::Streams::RandomAccessStreamReference) Thumbnail() const;
        WINRT_IMPL_AUTO(void) Thumbnail(winrt::Windows::Storage::Streams::RandomAccessStreamReference const& value) const;
        WINRT_IMPL_AUTO(void) ClearAll() const;
    };
    template <> struct consume<winrt::Windows::Media::Playback::IMediaItemDisplayProperties>
    {
        template <typename D> using type = consume_Windows_Media_Playback_IMediaItemDisplayProperties<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Playback_IMediaPlaybackCommandManager
    {
        [[nodiscard]] WINRT_IMPL_AUTO(bool) IsEnabled() const;
        WINRT_IMPL_AUTO(void) IsEnabled(bool value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Media::Playback::MediaPlayer) MediaPlayer() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Media::Playback::MediaPlaybackCommandManagerCommandBehavior) PlayBehavior() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Media::Playback::MediaPlaybackCommandManagerCommandBehavior) PauseBehavior() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Media::Playback::MediaPlaybackCommandManagerCommandBehavior) NextBehavior() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Media::Playback::MediaPlaybackCommandManagerCommandBehavior) PreviousBehavior() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Media::Playback::MediaPlaybackCommandManagerCommandBehavior) FastForwardBehavior() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Media::Playback::MediaPlaybackCommandManagerCommandBehavior) RewindBehavior() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Media::Playback::MediaPlaybackCommandManagerCommandBehavior) ShuffleBehavior() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Media::Playback::MediaPlaybackCommandManagerCommandBehavior) AutoRepeatModeBehavior() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Media::Playback::MediaPlaybackCommandManagerCommandBehavior) PositionBehavior() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Media::Playback::MediaPlaybackCommandManagerCommandBehavior) RateBehavior() const;
        WINRT_IMPL_AUTO(winrt::event_token) PlayReceived(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Media::Playback::MediaPlaybackCommandManager, winrt::Windows::Media::Playback::MediaPlaybackCommandManagerPlayReceivedEventArgs> const& handler) const;
        using PlayReceived_revoker = impl::event_revoker<winrt::Windows::Media::Playback::IMediaPlaybackCommandManager, &impl::abi_t<winrt::Windows::Media::Playback::IMediaPlaybackCommandManager>::remove_PlayReceived>;
        [[nodiscard]] PlayReceived_revoker PlayReceived(auto_revoke_t, winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Media::Playback::MediaPlaybackCommandManager, winrt::Windows::Media::Playback::MediaPlaybackCommandManagerPlayReceivedEventArgs> const& handler) const;
        WINRT_IMPL_AUTO(void) PlayReceived(winrt::event_token const& token) const noexcept;
        WINRT_IMPL_AUTO(winrt::event_token) PauseReceived(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Media::Playback::MediaPlaybackCommandManager, winrt::Windows::Media::Playback::MediaPlaybackCommandManagerPauseReceivedEventArgs> const& handler) const;
        using PauseReceived_revoker = impl::event_revoker<winrt::Windows::Media::Playback::IMediaPlaybackCommandManager, &impl::abi_t<winrt::Windows::Media::Playback::IMediaPlaybackCommandManager>::remove_PauseReceived>;
        [[nodiscard]] PauseReceived_revoker PauseReceived(auto_revoke_t, winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Media::Playback::MediaPlaybackCommandManager, winrt::Windows::Media::Playback::MediaPlaybackCommandManagerPauseReceivedEventArgs> const& handler) const;
        WINRT_IMPL_AUTO(void) PauseReceived(winrt::event_token const& token) const noexcept;
        WINRT_IMPL_AUTO(winrt::event_token) NextReceived(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Media::Playback::MediaPlaybackCommandManager, winrt::Windows::Media::Playback::MediaPlaybackCommandManagerNextReceivedEventArgs> const& handler) const;
        using NextReceived_revoker = impl::event_revoker<winrt::Windows::Media::Playback::IMediaPlaybackCommandManager, &impl::abi_t<winrt::Windows::Media::Playback::IMediaPlaybackCommandManager>::remove_NextReceived>;
        [[nodiscard]] NextReceived_revoker NextReceived(auto_revoke_t, winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Media::Playback::MediaPlaybackCommandManager, winrt::Windows::Media::Playback::MediaPlaybackCommandManagerNextReceivedEventArgs> const& handler) const;
        WINRT_IMPL_AUTO(void) NextReceived(winrt::event_token const& token) const noexcept;
        WINRT_IMPL_AUTO(winrt::event_token) PreviousReceived(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Media::Playback::MediaPlaybackCommandManager, winrt::Windows::Media::Playback::MediaPlaybackCommandManagerPreviousReceivedEventArgs> const& handler) const;
        using PreviousReceived_revoker = impl::event_revoker<winrt::Windows::Media::Playback::IMediaPlaybackCommandManager, &impl::abi_t<winrt::Windows::Media::Playback::IMediaPlaybackCommandManager>::remove_PreviousReceived>;
        [[nodiscard]] PreviousReceived_revoker PreviousReceived(auto_revoke_t, winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Media::Playback::MediaPlaybackCommandManager, winrt::Windows::Media::Playback::MediaPlaybackCommandManagerPreviousReceivedEventArgs> const& handler) const;
        WINRT_IMPL_AUTO(void) PreviousReceived(winrt::event_token const& token) const noexcept;
        WINRT_IMPL_AUTO(winrt::event_token) FastForwardReceived(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Media::Playback::MediaPlaybackCommandManager, winrt::Windows::Media::Playback::MediaPlaybackCommandManagerFastForwardReceivedEventArgs> const& handler) const;
        using FastForwardReceived_revoker = impl::event_revoker<winrt::Windows::Media::Playback::IMediaPlaybackCommandManager, &impl::abi_t<winrt::Windows::Media::Playback::IMediaPlaybackCommandManager>::remove_FastForwardReceived>;
        [[nodiscard]] FastForwardReceived_revoker FastForwardReceived(auto_revoke_t, winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Media::Playback::MediaPlaybackCommandManager, winrt::Windows::Media::Playback::MediaPlaybackCommandManagerFastForwardReceivedEventArgs> const& handler) const;
        WINRT_IMPL_AUTO(void) FastForwardReceived(winrt::event_token const& token) const noexcept;
        WINRT_IMPL_AUTO(winrt::event_token) RewindReceived(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Media::Playback::MediaPlaybackCommandManager, winrt::Windows::Media::Playback::MediaPlaybackCommandManagerRewindReceivedEventArgs> const& handler) const;
        using RewindReceived_revoker = impl::event_revoker<winrt::Windows::Media::Playback::IMediaPlaybackCommandManager, &impl::abi_t<winrt::Windows::Media::Playback::IMediaPlaybackCommandManager>::remove_RewindReceived>;
        [[nodiscard]] RewindReceived_revoker RewindReceived(auto_revoke_t, winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Media::Playback::MediaPlaybackCommandManager, winrt::Windows::Media::Playback::MediaPlaybackCommandManagerRewindReceivedEventArgs> const& handler) const;
        WINRT_IMPL_AUTO(void) RewindReceived(winrt::event_token const& token) const noexcept;
        WINRT_IMPL_AUTO(winrt::event_token) ShuffleReceived(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Media::Playback::MediaPlaybackCommandManager, winrt::Windows::Media::Playback::MediaPlaybackCommandManagerShuffleReceivedEventArgs> const& handler) const;
        using ShuffleReceived_revoker = impl::event_revoker<winrt::Windows::Media::Playback::IMediaPlaybackCommandManager, &impl::abi_t<winrt::Windows::Media::Playback::IMediaPlaybackCommandManager>::remove_ShuffleReceived>;
        [[nodiscard]] ShuffleReceived_revoker ShuffleReceived(auto_revoke_t, winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Media::Playback::MediaPlaybackCommandManager, winrt::Windows::Media::Playback::MediaPlaybackCommandManagerShuffleReceivedEventArgs> const& handler) const;
        WINRT_IMPL_AUTO(void) ShuffleReceived(winrt::event_token const& token) const noexcept;
        WINRT_IMPL_AUTO(winrt::event_token) AutoRepeatModeReceived(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Media::Playback::MediaPlaybackCommandManager, winrt::Windows::Media::Playback::MediaPlaybackCommandManagerAutoRepeatModeReceivedEventArgs> const& handler) const;
        using AutoRepeatModeReceived_revoker = impl::event_revoker<winrt::Windows::Media::Playback::IMediaPlaybackCommandManager, &impl::abi_t<winrt::Windows::Media::Playback::IMediaPlaybackCommandManager>::remove_AutoRepeatModeReceived>;
        [[nodiscard]] AutoRepeatModeReceived_revoker AutoRepeatModeReceived(auto_revoke_t, winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Media::Playback::MediaPlaybackCommandManager, winrt::Windows::Media::Playback::MediaPlaybackCommandManagerAutoRepeatModeReceivedEventArgs> const& handler) const;
        WINRT_IMPL_AUTO(void) AutoRepeatModeReceived(winrt::event_token const& token) const noexcept;
        WINRT_IMPL_AUTO(winrt::event_token) PositionReceived(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Media::Playback::MediaPlaybackCommandManager, winrt::Windows::Media::Playback::MediaPlaybackCommandManagerPositionReceivedEventArgs> const& handler) const;
        using PositionReceived_revoker = impl::event_revoker<winrt::Windows::Media::Playback::IMediaPlaybackCommandManager, &impl::abi_t<winrt::Windows::Media::Playback::IMediaPlaybackCommandManager>::remove_PositionReceived>;
        [[nodiscard]] PositionReceived_revoker PositionReceived(auto_revoke_t, winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Media::Playback::MediaPlaybackCommandManager, winrt::Windows::Media::Playback::MediaPlaybackCommandManagerPositionReceivedEventArgs> const& handler) const;
        WINRT_IMPL_AUTO(void) PositionReceived(winrt::event_token const& token) const noexcept;
        WINRT_IMPL_AUTO(winrt::event_token) RateReceived(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Media::Playback::MediaPlaybackCommandManager, winrt::Windows::Media::Playback::MediaPlaybackCommandManagerRateReceivedEventArgs> const& handler) const;
        using RateReceived_revoker = impl::event_revoker<winrt::Windows::Media::Playback::IMediaPlaybackCommandManager, &impl::abi_t<winrt::Windows::Media::Playback::IMediaPlaybackCommandManager>::remove_RateReceived>;
        [[nodiscard]] RateReceived_revoker RateReceived(auto_revoke_t, winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Media::Playback::MediaPlaybackCommandManager, winrt::Windows::Media::Playback::MediaPlaybackCommandManagerRateReceivedEventArgs> const& handler) const;
        WINRT_IMPL_AUTO(void) RateReceived(winrt::event_token const& token) const noexcept;
    };
    template <> struct consume<winrt::Windows::Media::Playback::IMediaPlaybackCommandManager>
    {
        template <typename D> using type = consume_Windows_Media_Playback_IMediaPlaybackCommandManager<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Playback_IMediaPlaybackCommandManagerAutoRepeatModeReceivedEventArgs
    {
        [[nodiscard]] WINRT_IMPL_AUTO(bool) Handled() const;
        WINRT_IMPL_AUTO(void) Handled(bool value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Media::MediaPlaybackAutoRepeatMode) AutoRepeatMode() const;
        WINRT_IMPL_AUTO(winrt::Windows::Foundation::Deferral) GetDeferral() const;
    };
    template <> struct consume<winrt::Windows::Media::Playback::IMediaPlaybackCommandManagerAutoRepeatModeReceivedEventArgs>
    {
        template <typename D> using type = consume_Windows_Media_Playback_IMediaPlaybackCommandManagerAutoRepeatModeReceivedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Playback_IMediaPlaybackCommandManagerCommandBehavior
    {
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Media::Playback::MediaPlaybackCommandManager) CommandManager() const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) IsEnabled() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Media::Playback::MediaCommandEnablingRule) EnablingRule() const;
        WINRT_IMPL_AUTO(void) EnablingRule(winrt::Windows::Media::Playback::MediaCommandEnablingRule const& value) const;
        WINRT_IMPL_AUTO(winrt::event_token) IsEnabledChanged(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Media::Playback::MediaPlaybackCommandManagerCommandBehavior, winrt::Windows::Foundation::IInspectable> const& handler) const;
        using IsEnabledChanged_revoker = impl::event_revoker<winrt::Windows::Media::Playback::IMediaPlaybackCommandManagerCommandBehavior, &impl::abi_t<winrt::Windows::Media::Playback::IMediaPlaybackCommandManagerCommandBehavior>::remove_IsEnabledChanged>;
        [[nodiscard]] IsEnabledChanged_revoker IsEnabledChanged(auto_revoke_t, winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Media::Playback::MediaPlaybackCommandManagerCommandBehavior, winrt::Windows::Foundation::IInspectable> const& handler) const;
        WINRT_IMPL_AUTO(void) IsEnabledChanged(winrt::event_token const& token) const noexcept;
    };
    template <> struct consume<winrt::Windows::Media::Playback::IMediaPlaybackCommandManagerCommandBehavior>
    {
        template <typename D> using type = consume_Windows_Media_Playback_IMediaPlaybackCommandManagerCommandBehavior<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Playback_IMediaPlaybackCommandManagerFastForwardReceivedEventArgs
    {
        [[nodiscard]] WINRT_IMPL_AUTO(bool) Handled() const;
        WINRT_IMPL_AUTO(void) Handled(bool value) const;
        WINRT_IMPL_AUTO(winrt::Windows::Foundation::Deferral) GetDeferral() const;
    };
    template <> struct consume<winrt::Windows::Media::Playback::IMediaPlaybackCommandManagerFastForwardReceivedEventArgs>
    {
        template <typename D> using type = consume_Windows_Media_Playback_IMediaPlaybackCommandManagerFastForwardReceivedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Playback_IMediaPlaybackCommandManagerNextReceivedEventArgs
    {
        [[nodiscard]] WINRT_IMPL_AUTO(bool) Handled() const;
        WINRT_IMPL_AUTO(void) Handled(bool value) const;
        WINRT_IMPL_AUTO(winrt::Windows::Foundation::Deferral) GetDeferral() const;
    };
    template <> struct consume<winrt::Windows::Media::Playback::IMediaPlaybackCommandManagerNextReceivedEventArgs>
    {
        template <typename D> using type = consume_Windows_Media_Playback_IMediaPlaybackCommandManagerNextReceivedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Playback_IMediaPlaybackCommandManagerPauseReceivedEventArgs
    {
        [[nodiscard]] WINRT_IMPL_AUTO(bool) Handled() const;
        WINRT_IMPL_AUTO(void) Handled(bool value) const;
        WINRT_IMPL_AUTO(winrt::Windows::Foundation::Deferral) GetDeferral() const;
    };
    template <> struct consume<winrt::Windows::Media::Playback::IMediaPlaybackCommandManagerPauseReceivedEventArgs>
    {
        template <typename D> using type = consume_Windows_Media_Playback_IMediaPlaybackCommandManagerPauseReceivedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Playback_IMediaPlaybackCommandManagerPlayReceivedEventArgs
    {
        [[nodiscard]] WINRT_IMPL_AUTO(bool) Handled() const;
        WINRT_IMPL_AUTO(void) Handled(bool value) const;
        WINRT_IMPL_AUTO(winrt::Windows::Foundation::Deferral) GetDeferral() const;
    };
    template <> struct consume<winrt::Windows::Media::Playback::IMediaPlaybackCommandManagerPlayReceivedEventArgs>
    {
        template <typename D> using type = consume_Windows_Media_Playback_IMediaPlaybackCommandManagerPlayReceivedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Playback_IMediaPlaybackCommandManagerPositionReceivedEventArgs
    {
        [[nodiscard]] WINRT_IMPL_AUTO(bool) Handled() const;
        WINRT_IMPL_AUTO(void) Handled(bool value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Foundation::TimeSpan) Position() const;
        WINRT_IMPL_AUTO(winrt::Windows::Foundation::Deferral) GetDeferral() const;
    };
    template <> struct consume<winrt::Windows::Media::Playback::IMediaPlaybackCommandManagerPositionReceivedEventArgs>
    {
        template <typename D> using type = consume_Windows_Media_Playback_IMediaPlaybackCommandManagerPositionReceivedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Playback_IMediaPlaybackCommandManagerPreviousReceivedEventArgs
    {
        [[nodiscard]] WINRT_IMPL_AUTO(bool) Handled() const;
        WINRT_IMPL_AUTO(void) Handled(bool value) const;
        WINRT_IMPL_AUTO(winrt::Windows::Foundation::Deferral) GetDeferral() const;
    };
    template <> struct consume<winrt::Windows::Media::Playback::IMediaPlaybackCommandManagerPreviousReceivedEventArgs>
    {
        template <typename D> using type = consume_Windows_Media_Playback_IMediaPlaybackCommandManagerPreviousReceivedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Playback_IMediaPlaybackCommandManagerRateReceivedEventArgs
    {
        [[nodiscard]] WINRT_IMPL_AUTO(bool) Handled() const;
        WINRT_IMPL_AUTO(void) Handled(bool value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(double) PlaybackRate() const;
        WINRT_IMPL_AUTO(winrt::Windows::Foundation::Deferral) GetDeferral() const;
    };
    template <> struct consume<winrt::Windows::Media::Playback::IMediaPlaybackCommandManagerRateReceivedEventArgs>
    {
        template <typename D> using type = consume_Windows_Media_Playback_IMediaPlaybackCommandManagerRateReceivedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Playback_IMediaPlaybackCommandManagerRewindReceivedEventArgs
    {
        [[nodiscard]] WINRT_IMPL_AUTO(bool) Handled() const;
        WINRT_IMPL_AUTO(void) Handled(bool value) const;
        WINRT_IMPL_AUTO(winrt::Windows::Foundation::Deferral) GetDeferral() const;
    };
    template <> struct consume<winrt::Windows::Media::Playback::IMediaPlaybackCommandManagerRewindReceivedEventArgs>
    {
        template <typename D> using type = consume_Windows_Media_Playback_IMediaPlaybackCommandManagerRewindReceivedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Playback_IMediaPlaybackCommandManagerShuffleReceivedEventArgs
    {
        [[nodiscard]] WINRT_IMPL_AUTO(bool) Handled() const;
        WINRT_IMPL_AUTO(void) Handled(bool value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) IsShuffleRequested() const;
        WINRT_IMPL_AUTO(winrt::Windows::Foundation::Deferral) GetDeferral() const;
    };
    template <> struct consume<winrt::Windows::Media::Playback::IMediaPlaybackCommandManagerShuffleReceivedEventArgs>
    {
        template <typename D> using type = consume_Windows_Media_Playback_IMediaPlaybackCommandManagerShuffleReceivedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Playback_IMediaPlaybackItem
    {
        WINRT_IMPL_AUTO(winrt::event_token) AudioTracksChanged(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Media::Playback::MediaPlaybackItem, winrt::Windows::Foundation::Collections::IVectorChangedEventArgs> const& handler) const;
        using AudioTracksChanged_revoker = impl::event_revoker<winrt::Windows::Media::Playback::IMediaPlaybackItem, &impl::abi_t<winrt::Windows::Media::Playback::IMediaPlaybackItem>::remove_AudioTracksChanged>;
        [[nodiscard]] AudioTracksChanged_revoker AudioTracksChanged(auto_revoke_t, winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Media::Playback::MediaPlaybackItem, winrt::Windows::Foundation::Collections::IVectorChangedEventArgs> const& handler) const;
        WINRT_IMPL_AUTO(void) AudioTracksChanged(winrt::event_token const& token) const noexcept;
        WINRT_IMPL_AUTO(winrt::event_token) VideoTracksChanged(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Media::Playback::MediaPlaybackItem, winrt::Windows::Foundation::Collections::IVectorChangedEventArgs> const& handler) const;
        using VideoTracksChanged_revoker = impl::event_revoker<winrt::Windows::Media::Playback::IMediaPlaybackItem, &impl::abi_t<winrt::Windows::Media::Playback::IMediaPlaybackItem>::remove_VideoTracksChanged>;
        [[nodiscard]] VideoTracksChanged_revoker VideoTracksChanged(auto_revoke_t, winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Media::Playback::MediaPlaybackItem, winrt::Windows::Foundation::Collections::IVectorChangedEventArgs> const& handler) const;
        WINRT_IMPL_AUTO(void) VideoTracksChanged(winrt::event_token const& token) const noexcept;
        WINRT_IMPL_AUTO(winrt::event_token) TimedMetadataTracksChanged(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Media::Playback::MediaPlaybackItem, winrt::Windows::Foundation::Collections::IVectorChangedEventArgs> const& handler) const;
        using TimedMetadataTracksChanged_revoker = impl::event_revoker<winrt::Windows::Media::Playback::IMediaPlaybackItem, &impl::abi_t<winrt::Windows::Media::Playback::IMediaPlaybackItem>::remove_TimedMetadataTracksChanged>;
        [[nodiscard]] TimedMetadataTracksChanged_revoker TimedMetadataTracksChanged(auto_revoke_t, winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Media::Playback::MediaPlaybackItem, winrt::Windows::Foundation::Collections::IVectorChangedEventArgs> const& handler) const;
        WINRT_IMPL_AUTO(void) TimedMetadataTracksChanged(winrt::event_token const& token) const noexcept;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Media::Core::MediaSource) Source() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Media::Playback::MediaPlaybackAudioTrackList) AudioTracks() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Media::Playback::MediaPlaybackVideoTrackList) VideoTracks() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Media::Playback::MediaPlaybackTimedMetadataTrackList) TimedMetadataTracks() const;
    };
    template <> struct consume<winrt::Windows::Media::Playback::IMediaPlaybackItem>
    {
        template <typename D> using type = consume_Windows_Media_Playback_IMediaPlaybackItem<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Playback_IMediaPlaybackItem2
    {
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Media::Playback::MediaBreakSchedule) BreakSchedule() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Foundation::TimeSpan) StartTime() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Foundation::IReference<winrt::Windows::Foundation::TimeSpan>) DurationLimit() const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) CanSkip() const;
        WINRT_IMPL_AUTO(void) CanSkip(bool value) const;
        WINRT_IMPL_AUTO(winrt::Windows::Media::Playback::MediaItemDisplayProperties) GetDisplayProperties() const;
        WINRT_IMPL_AUTO(void) ApplyDisplayProperties(winrt::Windows::Media::Playback::MediaItemDisplayProperties const& value) const;
    };
    template <> struct consume<winrt::Windows::Media::Playback::IMediaPlaybackItem2>
    {
        template <typename D> using type = consume_Windows_Media_Playback_IMediaPlaybackItem2<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Playback_IMediaPlaybackItem3
    {
        [[nodiscard]] WINRT_IMPL_AUTO(bool) IsDisabledInPlaybackList() const;
        WINRT_IMPL_AUTO(void) IsDisabledInPlaybackList(bool value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(double) TotalDownloadProgress() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Media::Playback::AutoLoadedDisplayPropertyKind) AutoLoadedDisplayProperties() const;
        WINRT_IMPL_AUTO(void) AutoLoadedDisplayProperties(winrt::Windows::Media::Playback::AutoLoadedDisplayPropertyKind const& value) const;
    };
    template <> struct consume<winrt::Windows::Media::Playback::IMediaPlaybackItem3>
    {
        template <typename D> using type = consume_Windows_Media_Playback_IMediaPlaybackItem3<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Playback_IMediaPlaybackItemError
    {
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Media::Playback::MediaPlaybackItemErrorCode) ErrorCode() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::hresult) ExtendedError() const;
    };
    template <> struct consume<winrt::Windows::Media::Playback::IMediaPlaybackItemError>
    {
        template <typename D> using type = consume_Windows_Media_Playback_IMediaPlaybackItemError<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Playback_IMediaPlaybackItemFactory
    {
        WINRT_IMPL_AUTO(winrt::Windows::Media::Playback::MediaPlaybackItem) Create(winrt::Windows::Media::Core::MediaSource const& source) const;
    };
    template <> struct consume<winrt::Windows::Media::Playback::IMediaPlaybackItemFactory>
    {
        template <typename D> using type = consume_Windows_Media_Playback_IMediaPlaybackItemFactory<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Playback_IMediaPlaybackItemFactory2
    {
        WINRT_IMPL_AUTO(winrt::Windows::Media::Playback::MediaPlaybackItem) CreateWithStartTime(winrt::Windows::Media::Core::MediaSource const& source, winrt::Windows::Foundation::TimeSpan const& startTime) const;
        WINRT_IMPL_AUTO(winrt::Windows::Media::Playback::MediaPlaybackItem) CreateWithStartTimeAndDurationLimit(winrt::Windows::Media::Core::MediaSource const& source, winrt::Windows::Foundation::TimeSpan const& startTime, winrt::Windows::Foundation::TimeSpan const& durationLimit) const;
    };
    template <> struct consume<winrt::Windows::Media::Playback::IMediaPlaybackItemFactory2>
    {
        template <typename D> using type = consume_Windows_Media_Playback_IMediaPlaybackItemFactory2<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Playback_IMediaPlaybackItemFailedEventArgs
    {
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Media::Playback::MediaPlaybackItem) Item() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Media::Playback::MediaPlaybackItemError) Error() const;
    };
    template <> struct consume<winrt::Windows::Media::Playback::IMediaPlaybackItemFailedEventArgs>
    {
        template <typename D> using type = consume_Windows_Media_Playback_IMediaPlaybackItemFailedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Playback_IMediaPlaybackItemOpenedEventArgs
    {
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Media::Playback::MediaPlaybackItem) Item() const;
    };
    template <> struct consume<winrt::Windows::Media::Playback::IMediaPlaybackItemOpenedEventArgs>
    {
        template <typename D> using type = consume_Windows_Media_Playback_IMediaPlaybackItemOpenedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Playback_IMediaPlaybackItemStatics
    {
        WINRT_IMPL_AUTO(winrt::Windows::Media::Playback::MediaPlaybackItem) FindFromMediaSource(winrt::Windows::Media::Core::MediaSource const& source) const;
    };
    template <> struct consume<winrt::Windows::Media::Playback::IMediaPlaybackItemStatics>
    {
        template <typename D> using type = consume_Windows_Media_Playback_IMediaPlaybackItemStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Playback_IMediaPlaybackList
    {
        WINRT_IMPL_AUTO(winrt::event_token) ItemFailed(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Media::Playback::MediaPlaybackList, winrt::Windows::Media::Playback::MediaPlaybackItemFailedEventArgs> const& handler) const;
        using ItemFailed_revoker = impl::event_revoker<winrt::Windows::Media::Playback::IMediaPlaybackList, &impl::abi_t<winrt::Windows::Media::Playback::IMediaPlaybackList>::remove_ItemFailed>;
        [[nodiscard]] ItemFailed_revoker ItemFailed(auto_revoke_t, winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Media::Playback::MediaPlaybackList, winrt::Windows::Media::Playback::MediaPlaybackItemFailedEventArgs> const& handler) const;
        WINRT_IMPL_AUTO(void) ItemFailed(winrt::event_token const& token) const noexcept;
        WINRT_IMPL_AUTO(winrt::event_token) CurrentItemChanged(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Media::Playback::MediaPlaybackList, winrt::Windows::Media::Playback::CurrentMediaPlaybackItemChangedEventArgs> const& handler) const;
        using CurrentItemChanged_revoker = impl::event_revoker<winrt::Windows::Media::Playback::IMediaPlaybackList, &impl::abi_t<winrt::Windows::Media::Playback::IMediaPlaybackList>::remove_CurrentItemChanged>;
        [[nodiscard]] CurrentItemChanged_revoker CurrentItemChanged(auto_revoke_t, winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Media::Playback::MediaPlaybackList, winrt::Windows::Media::Playback::CurrentMediaPlaybackItemChangedEventArgs> const& handler) const;
        WINRT_IMPL_AUTO(void) CurrentItemChanged(winrt::event_token const& token) const noexcept;
        WINRT_IMPL_AUTO(winrt::event_token) ItemOpened(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Media::Playback::MediaPlaybackList, winrt::Windows::Media::Playback::MediaPlaybackItemOpenedEventArgs> const& handler) const;
        using ItemOpened_revoker = impl::event_revoker<winrt::Windows::Media::Playback::IMediaPlaybackList, &impl::abi_t<winrt::Windows::Media::Playback::IMediaPlaybackList>::remove_ItemOpened>;
        [[nodiscard]] ItemOpened_revoker ItemOpened(auto_revoke_t, winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Media::Playback::MediaPlaybackList, winrt::Windows::Media::Playback::MediaPlaybackItemOpenedEventArgs> const& handler) const;
        WINRT_IMPL_AUTO(void) ItemOpened(winrt::event_token const& token) const noexcept;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Foundation::Collections::IObservableVector<winrt::Windows::Media::Playback::MediaPlaybackItem>) Items() const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) AutoRepeatEnabled() const;
        WINRT_IMPL_AUTO(void) AutoRepeatEnabled(bool value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) ShuffleEnabled() const;
        WINRT_IMPL_AUTO(void) ShuffleEnabled(bool value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Media::Playback::MediaPlaybackItem) CurrentItem() const;
        [[nodiscard]] WINRT_IMPL_AUTO(uint32_t) CurrentItemIndex() const;
        WINRT_IMPL_AUTO(winrt::Windows::Media::Playback::MediaPlaybackItem) MoveNext() const;
        WINRT_IMPL_AUTO(winrt::Windows::Media::Playback::MediaPlaybackItem) MovePrevious() const;
        WINRT_IMPL_AUTO(winrt::Windows::Media::Playback::MediaPlaybackItem) MoveTo(uint32_t itemIndex) const;
    };
    template <> struct consume<winrt::Windows::Media::Playback::IMediaPlaybackList>
    {
        template <typename D> using type = consume_Windows_Media_Playback_IMediaPlaybackList<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Playback_IMediaPlaybackList2
    {
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Foundation::IReference<winrt::Windows::Foundation::TimeSpan>) MaxPrefetchTime() const;
        WINRT_IMPL_AUTO(void) MaxPrefetchTime(winrt::Windows::Foundation::IReference<winrt::Windows::Foundation::TimeSpan> const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Media::Playback::MediaPlaybackItem) StartingItem() const;
        WINRT_IMPL_AUTO(void) StartingItem(winrt::Windows::Media::Playback::MediaPlaybackItem const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Media::Playback::MediaPlaybackItem>) ShuffledItems() const;
        WINRT_IMPL_AUTO(void) SetShuffledItems(param::iterable<winrt::Windows::Media::Playback::MediaPlaybackItem> const& value) const;
    };
    template <> struct consume<winrt::Windows::Media::Playback::IMediaPlaybackList2>
    {
        template <typename D> using type = consume_Windows_Media_Playback_IMediaPlaybackList2<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Playback_IMediaPlaybackList3
    {
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Foundation::IReference<uint32_t>) MaxPlayedItemsToKeepOpen() const;
        WINRT_IMPL_AUTO(void) MaxPlayedItemsToKeepOpen(winrt::Windows::Foundation::IReference<uint32_t> const& value) const;
    };
    template <> struct consume<winrt::Windows::Media::Playback::IMediaPlaybackList3>
    {
        template <typename D> using type = consume_Windows_Media_Playback_IMediaPlaybackList3<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Playback_IMediaPlaybackSession
    {
        WINRT_IMPL_AUTO(winrt::event_token) PlaybackStateChanged(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Media::Playback::MediaPlaybackSession, winrt::Windows::Foundation::IInspectable> const& value) const;
        using PlaybackStateChanged_revoker = impl::event_revoker<winrt::Windows::Media::Playback::IMediaPlaybackSession, &impl::abi_t<winrt::Windows::Media::Playback::IMediaPlaybackSession>::remove_PlaybackStateChanged>;
        [[nodiscard]] PlaybackStateChanged_revoker PlaybackStateChanged(auto_revoke_t, winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Media::Playback::MediaPlaybackSession, winrt::Windows::Foundation::IInspectable> const& value) const;
        WINRT_IMPL_AUTO(void) PlaybackStateChanged(winrt::event_token const& token) const noexcept;
        WINRT_IMPL_AUTO(winrt::event_token) PlaybackRateChanged(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Media::Playback::MediaPlaybackSession, winrt::Windows::Foundation::IInspectable> const& value) const;
        using PlaybackRateChanged_revoker = impl::event_revoker<winrt::Windows::Media::Playback::IMediaPlaybackSession, &impl::abi_t<winrt::Windows::Media::Playback::IMediaPlaybackSession>::remove_PlaybackRateChanged>;
        [[nodiscard]] PlaybackRateChanged_revoker PlaybackRateChanged(auto_revoke_t, winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Media::Playback::MediaPlaybackSession, winrt::Windows::Foundation::IInspectable> const& value) const;
        WINRT_IMPL_AUTO(void) PlaybackRateChanged(winrt::event_token const& token) const noexcept;
        WINRT_IMPL_AUTO(winrt::event_token) SeekCompleted(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Media::Playback::MediaPlaybackSession, winrt::Windows::Foundation::IInspectable> const& value) const;
        using SeekCompleted_revoker = impl::event_revoker<winrt::Windows::Media::Playback::IMediaPlaybackSession, &impl::abi_t<winrt::Windows::Media::Playback::IMediaPlaybackSession>::remove_SeekCompleted>;
        [[nodiscard]] SeekCompleted_revoker SeekCompleted(auto_revoke_t, winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Media::Playback::MediaPlaybackSession, winrt::Windows::Foundation::IInspectable> const& value) const;
        WINRT_IMPL_AUTO(void) SeekCompleted(winrt::event_token const& token) const noexcept;
        WINRT_IMPL_AUTO(winrt::event_token) BufferingStarted(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Media::Playback::MediaPlaybackSession, winrt::Windows::Foundation::IInspectable> const& value) const;
        using BufferingStarted_revoker = impl::event_revoker<winrt::Windows::Media::Playback::IMediaPlaybackSession, &impl::abi_t<winrt::Windows::Media::Playback::IMediaPlaybackSession>::remove_BufferingStarted>;
        [[nodiscard]] BufferingStarted_revoker BufferingStarted(auto_revoke_t, winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Media::Playback::MediaPlaybackSession, winrt::Windows::Foundation::IInspectable> const& value) const;
        WINRT_IMPL_AUTO(void) BufferingStarted(winrt::event_token const& token) const noexcept;
        WINRT_IMPL_AUTO(winrt::event_token) BufferingEnded(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Media::Playback::MediaPlaybackSession, winrt::Windows::Foundation::IInspectable> const& value) const;
        using BufferingEnded_revoker = impl::event_revoker<winrt::Windows::Media::Playback::IMediaPlaybackSession, &impl::abi_t<winrt::Windows::Media::Playback::IMediaPlaybackSession>::remove_BufferingEnded>;
        [[nodiscard]] BufferingEnded_revoker BufferingEnded(auto_revoke_t, winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Media::Playback::MediaPlaybackSession, winrt::Windows::Foundation::IInspectable> const& value) const;
        WINRT_IMPL_AUTO(void) BufferingEnded(winrt::event_token const& token) const noexcept;
        WINRT_IMPL_AUTO(winrt::event_token) BufferingProgressChanged(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Media::Playback::MediaPlaybackSession, winrt::Windows::Foundation::IInspectable> const& value) const;
        using BufferingProgressChanged_revoker = impl::event_revoker<winrt::Windows::Media::Playback::IMediaPlaybackSession, &impl::abi_t<winrt::Windows::Media::Playback::IMediaPlaybackSession>::remove_BufferingProgressChanged>;
        [[nodiscard]] BufferingProgressChanged_revoker BufferingProgressChanged(auto_revoke_t, winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Media::Playback::MediaPlaybackSession, winrt::Windows::Foundation::IInspectable> const& value) const;
        WINRT_IMPL_AUTO(void) BufferingProgressChanged(winrt::event_token const& token) const noexcept;
        WINRT_IMPL_AUTO(winrt::event_token) DownloadProgressChanged(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Media::Playback::MediaPlaybackSession, winrt::Windows::Foundation::IInspectable> const& value) const;
        using DownloadProgressChanged_revoker = impl::event_revoker<winrt::Windows::Media::Playback::IMediaPlaybackSession, &impl::abi_t<winrt::Windows::Media::Playback::IMediaPlaybackSession>::remove_DownloadProgressChanged>;
        [[nodiscard]] DownloadProgressChanged_revoker DownloadProgressChanged(auto_revoke_t, winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Media::Playback::MediaPlaybackSession, winrt::Windows::Foundation::IInspectable> const& value) const;
        WINRT_IMPL_AUTO(void) DownloadProgressChanged(winrt::event_token const& token) const noexcept;
        WINRT_IMPL_AUTO(winrt::event_token) NaturalDurationChanged(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Media::Playback::MediaPlaybackSession, winrt::Windows::Foundation::IInspectable> const& value) const;
        using NaturalDurationChanged_revoker = impl::event_revoker<winrt::Windows::Media::Playback::IMediaPlaybackSession, &impl::abi_t<winrt::Windows::Media::Playback::IMediaPlaybackSession>::remove_NaturalDurationChanged>;
        [[nodiscard]] NaturalDurationChanged_revoker NaturalDurationChanged(auto_revoke_t, winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Media::Playback::MediaPlaybackSession, winrt::Windows::Foundation::IInspectable> const& value) const;
        WINRT_IMPL_AUTO(void) NaturalDurationChanged(winrt::event_token const& token) const noexcept;
        WINRT_IMPL_AUTO(winrt::event_token) PositionChanged(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Media::Playback::MediaPlaybackSession, winrt::Windows::Foundation::IInspectable> const& value) const;
        using PositionChanged_revoker = impl::event_revoker<winrt::Windows::Media::Playback::IMediaPlaybackSession, &impl::abi_t<winrt::Windows::Media::Playback::IMediaPlaybackSession>::remove_PositionChanged>;
        [[nodiscard]] PositionChanged_revoker PositionChanged(auto_revoke_t, winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Media::Playback::MediaPlaybackSession, winrt::Windows::Foundation::IInspectable> const& value) const;
        WINRT_IMPL_AUTO(void) PositionChanged(winrt::event_token const& token) const noexcept;
        WINRT_IMPL_AUTO(winrt::event_token) NaturalVideoSizeChanged(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Media::Playback::MediaPlaybackSession, winrt::Windows::Foundation::IInspectable> const& value) const;
        using NaturalVideoSizeChanged_revoker = impl::event_revoker<winrt::Windows::Media::Playback::IMediaPlaybackSession, &impl::abi_t<winrt::Windows::Media::Playback::IMediaPlaybackSession>::remove_NaturalVideoSizeChanged>;
        [[nodiscard]] NaturalVideoSizeChanged_revoker NaturalVideoSizeChanged(auto_revoke_t, winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Media::Playback::MediaPlaybackSession, winrt::Windows::Foundation::IInspectable> const& value) const;
        WINRT_IMPL_AUTO(void) NaturalVideoSizeChanged(winrt::event_token const& token) const noexcept;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Media::Playback::MediaPlayer) MediaPlayer() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Foundation::TimeSpan) NaturalDuration() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Foundation::TimeSpan) Position() const;
        WINRT_IMPL_AUTO(void) Position(winrt::Windows::Foundation::TimeSpan const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Media::Playback::MediaPlaybackState) PlaybackState() const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) CanSeek() const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) CanPause() const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) IsProtected() const;
        [[nodiscard]] WINRT_IMPL_AUTO(double) PlaybackRate() const;
        WINRT_IMPL_AUTO(void) PlaybackRate(double value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(double) BufferingProgress() const;
        [[nodiscard]] WINRT_IMPL_AUTO(double) DownloadProgress() const;
        [[nodiscard]] WINRT_IMPL_AUTO(uint32_t) NaturalVideoHeight() const;
        [[nodiscard]] WINRT_IMPL_AUTO(uint32_t) NaturalVideoWidth() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Foundation::Rect) NormalizedSourceRect() const;
        WINRT_IMPL_AUTO(void) NormalizedSourceRect(winrt::Windows::Foundation::Rect const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Media::MediaProperties::StereoscopicVideoPackingMode) StereoscopicVideoPackingMode() const;
        WINRT_IMPL_AUTO(void) StereoscopicVideoPackingMode(winrt::Windows::Media::MediaProperties::StereoscopicVideoPackingMode const& value) const;
    };
    template <> struct consume<winrt::Windows::Media::Playback::IMediaPlaybackSession>
    {
        template <typename D> using type = consume_Windows_Media_Playback_IMediaPlaybackSession<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Playback_IMediaPlaybackSession2
    {
        WINRT_IMPL_AUTO(winrt::event_token) BufferedRangesChanged(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Media::Playback::MediaPlaybackSession, winrt::Windows::Foundation::IInspectable> const& value) const;
        using BufferedRangesChanged_revoker = impl::event_revoker<winrt::Windows::Media::Playback::IMediaPlaybackSession2, &impl::abi_t<winrt::Windows::Media::Playback::IMediaPlaybackSession2>::remove_BufferedRangesChanged>;
        [[nodiscard]] BufferedRangesChanged_revoker BufferedRangesChanged(auto_revoke_t, winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Media::Playback::MediaPlaybackSession, winrt::Windows::Foundation::IInspectable> const& value) const;
        WINRT_IMPL_AUTO(void) BufferedRangesChanged(winrt::event_token const& token) const noexcept;
        WINRT_IMPL_AUTO(winrt::event_token) PlayedRangesChanged(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Media::Playback::MediaPlaybackSession, winrt::Windows::Foundation::IInspectable> const& value) const;
        using PlayedRangesChanged_revoker = impl::event_revoker<winrt::Windows::Media::Playback::IMediaPlaybackSession2, &impl::abi_t<winrt::Windows::Media::Playback::IMediaPlaybackSession2>::remove_PlayedRangesChanged>;
        [[nodiscard]] PlayedRangesChanged_revoker PlayedRangesChanged(auto_revoke_t, winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Media::Playback::MediaPlaybackSession, winrt::Windows::Foundation::IInspectable> const& value) const;
        WINRT_IMPL_AUTO(void) PlayedRangesChanged(winrt::event_token const& token) const noexcept;
        WINRT_IMPL_AUTO(winrt::event_token) SeekableRangesChanged(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Media::Playback::MediaPlaybackSession, winrt::Windows::Foundation::IInspectable> const& value) const;
        using SeekableRangesChanged_revoker = impl::event_revoker<winrt::Windows::Media::Playback::IMediaPlaybackSession2, &impl::abi_t<winrt::Windows::Media::Playback::IMediaPlaybackSession2>::remove_SeekableRangesChanged>;
        [[nodiscard]] SeekableRangesChanged_revoker SeekableRangesChanged(auto_revoke_t, winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Media::Playback::MediaPlaybackSession, winrt::Windows::Foundation::IInspectable> const& value) const;
        WINRT_IMPL_AUTO(void) SeekableRangesChanged(winrt::event_token const& token) const noexcept;
        WINRT_IMPL_AUTO(winrt::event_token) SupportedPlaybackRatesChanged(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Media::Playback::MediaPlaybackSession, winrt::Windows::Foundation::IInspectable> const& value) const;
        using SupportedPlaybackRatesChanged_revoker = impl::event_revoker<winrt::Windows::Media::Playback::IMediaPlaybackSession2, &impl::abi_t<winrt::Windows::Media::Playback::IMediaPlaybackSession2>::remove_SupportedPlaybackRatesChanged>;
        [[nodiscard]] SupportedPlaybackRatesChanged_revoker SupportedPlaybackRatesChanged(auto_revoke_t, winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Media::Playback::MediaPlaybackSession, winrt::Windows::Foundation::IInspectable> const& value) const;
        WINRT_IMPL_AUTO(void) SupportedPlaybackRatesChanged(winrt::event_token const& token) const noexcept;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Media::Playback::MediaPlaybackSphericalVideoProjection) SphericalVideoProjection() const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) IsMirroring() const;
        WINRT_IMPL_AUTO(void) IsMirroring(bool value) const;
        WINRT_IMPL_AUTO(winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Media::MediaTimeRange>) GetBufferedRanges() const;
        WINRT_IMPL_AUTO(winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Media::MediaTimeRange>) GetPlayedRanges() const;
        WINRT_IMPL_AUTO(winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Media::MediaTimeRange>) GetSeekableRanges() const;
        WINRT_IMPL_AUTO(bool) IsSupportedPlaybackRateRange(double rate1, double rate2) const;
    };
    template <> struct consume<winrt::Windows::Media::Playback::IMediaPlaybackSession2>
    {
        template <typename D> using type = consume_Windows_Media_Playback_IMediaPlaybackSession2<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Playback_IMediaPlaybackSession3
    {
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Media::MediaProperties::MediaRotation) PlaybackRotation() const;
        WINRT_IMPL_AUTO(void) PlaybackRotation(winrt::Windows::Media::MediaProperties::MediaRotation const& value) const;
        WINRT_IMPL_AUTO(winrt::Windows::Media::Playback::MediaPlaybackSessionOutputDegradationPolicyState) GetOutputDegradationPolicyState() const;
    };
    template <> struct consume<winrt::Windows::Media::Playback::IMediaPlaybackSession3>
    {
        template <typename D> using type = consume_Windows_Media_Playback_IMediaPlaybackSession3<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Playback_IMediaPlaybackSessionBufferingStartedEventArgs
    {
        [[nodiscard]] WINRT_IMPL_AUTO(bool) IsPlaybackInterruption() const;
    };
    template <> struct consume<winrt::Windows::Media::Playback::IMediaPlaybackSessionBufferingStartedEventArgs>
    {
        template <typename D> using type = consume_Windows_Media_Playback_IMediaPlaybackSessionBufferingStartedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Playback_IMediaPlaybackSessionOutputDegradationPolicyState
    {
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Media::Playback::MediaPlaybackSessionVideoConstrictionReason) VideoConstrictionReason() const;
    };
    template <> struct consume<winrt::Windows::Media::Playback::IMediaPlaybackSessionOutputDegradationPolicyState>
    {
        template <typename D> using type = consume_Windows_Media_Playback_IMediaPlaybackSessionOutputDegradationPolicyState<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Playback_IMediaPlaybackSource
    {
    };
    template <> struct consume<winrt::Windows::Media::Playback::IMediaPlaybackSource>
    {
        template <typename D> using type = consume_Windows_Media_Playback_IMediaPlaybackSource<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Playback_IMediaPlaybackSphericalVideoProjection
    {
        [[nodiscard]] WINRT_IMPL_AUTO(bool) IsEnabled() const;
        WINRT_IMPL_AUTO(void) IsEnabled(bool value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Media::MediaProperties::SphericalVideoFrameFormat) FrameFormat() const;
        WINRT_IMPL_AUTO(void) FrameFormat(winrt::Windows::Media::MediaProperties::SphericalVideoFrameFormat const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(double) HorizontalFieldOfViewInDegrees() const;
        WINRT_IMPL_AUTO(void) HorizontalFieldOfViewInDegrees(double value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Foundation::Numerics::quaternion) ViewOrientation() const;
        WINRT_IMPL_AUTO(void) ViewOrientation(winrt::Windows::Foundation::Numerics::quaternion const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Media::Playback::SphericalVideoProjectionMode) ProjectionMode() const;
        WINRT_IMPL_AUTO(void) ProjectionMode(winrt::Windows::Media::Playback::SphericalVideoProjectionMode const& value) const;
    };
    template <> struct consume<winrt::Windows::Media::Playback::IMediaPlaybackSphericalVideoProjection>
    {
        template <typename D> using type = consume_Windows_Media_Playback_IMediaPlaybackSphericalVideoProjection<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Playback_IMediaPlaybackTimedMetadataTrackList
    {
        WINRT_IMPL_AUTO(winrt::event_token) PresentationModeChanged(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Media::Playback::MediaPlaybackTimedMetadataTrackList, winrt::Windows::Media::Playback::TimedMetadataPresentationModeChangedEventArgs> const& handler) const;
        using PresentationModeChanged_revoker = impl::event_revoker<winrt::Windows::Media::Playback::IMediaPlaybackTimedMetadataTrackList, &impl::abi_t<winrt::Windows::Media::Playback::IMediaPlaybackTimedMetadataTrackList>::remove_PresentationModeChanged>;
        [[nodiscard]] PresentationModeChanged_revoker PresentationModeChanged(auto_revoke_t, winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Media::Playback::MediaPlaybackTimedMetadataTrackList, winrt::Windows::Media::Playback::TimedMetadataPresentationModeChangedEventArgs> const& handler) const;
        WINRT_IMPL_AUTO(void) PresentationModeChanged(winrt::event_token const& token) const noexcept;
        WINRT_IMPL_AUTO(winrt::Windows::Media::Playback::TimedMetadataTrackPresentationMode) GetPresentationMode(uint32_t index) const;
        WINRT_IMPL_AUTO(void) SetPresentationMode(uint32_t index, winrt::Windows::Media::Playback::TimedMetadataTrackPresentationMode const& value) const;
    };
    template <> struct consume<winrt::Windows::Media::Playback::IMediaPlaybackTimedMetadataTrackList>
    {
        template <typename D> using type = consume_Windows_Media_Playback_IMediaPlaybackTimedMetadataTrackList<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Playback_IMediaPlayer
    {
        [[nodiscard]] WINRT_IMPL_AUTO(bool) AutoPlay() const;
        WINRT_IMPL_AUTO(void) AutoPlay(bool value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Foundation::TimeSpan) NaturalDuration() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Foundation::TimeSpan) Position() const;
        WINRT_IMPL_AUTO(void) Position(winrt::Windows::Foundation::TimeSpan const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(double) BufferingProgress() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Media::Playback::MediaPlayerState) CurrentState() const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) CanSeek() const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) CanPause() const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) IsLoopingEnabled() const;
        WINRT_IMPL_AUTO(void) IsLoopingEnabled(bool value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) IsProtected() const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) IsMuted() const;
        WINRT_IMPL_AUTO(void) IsMuted(bool value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(double) PlaybackRate() const;
        WINRT_IMPL_AUTO(void) PlaybackRate(double value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(double) Volume() const;
        WINRT_IMPL_AUTO(void) Volume(double value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Media::Playback::PlaybackMediaMarkerSequence) PlaybackMediaMarkers() const;
        WINRT_IMPL_AUTO(winrt::event_token) MediaOpened(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Media::Playback::MediaPlayer, winrt::Windows::Foundation::IInspectable> const& value) const;
        using MediaOpened_revoker = impl::event_revoker<winrt::Windows::Media::Playback::IMediaPlayer, &impl::abi_t<winrt::Windows::Media::Playback::IMediaPlayer>::remove_MediaOpened>;
        [[nodiscard]] MediaOpened_revoker MediaOpened(auto_revoke_t, winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Media::Playback::MediaPlayer, winrt::Windows::Foundation::IInspectable> const& value) const;
        WINRT_IMPL_AUTO(void) MediaOpened(winrt::event_token const& token) const noexcept;
        WINRT_IMPL_AUTO(winrt::event_token) MediaEnded(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Media::Playback::MediaPlayer, winrt::Windows::Foundation::IInspectable> const& value) const;
        using MediaEnded_revoker = impl::event_revoker<winrt::Windows::Media::Playback::IMediaPlayer, &impl::abi_t<winrt::Windows::Media::Playback::IMediaPlayer>::remove_MediaEnded>;
        [[nodiscard]] MediaEnded_revoker MediaEnded(auto_revoke_t, winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Media::Playback::MediaPlayer, winrt::Windows::Foundation::IInspectable> const& value) const;
        WINRT_IMPL_AUTO(void) MediaEnded(winrt::event_token const& token) const noexcept;
        WINRT_IMPL_AUTO(winrt::event_token) MediaFailed(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Media::Playback::MediaPlayer, winrt::Windows::Media::Playback::MediaPlayerFailedEventArgs> const& value) const;
        using MediaFailed_revoker = impl::event_revoker<winrt::Windows::Media::Playback::IMediaPlayer, &impl::abi_t<winrt::Windows::Media::Playback::IMediaPlayer>::remove_MediaFailed>;
        [[nodiscard]] MediaFailed_revoker MediaFailed(auto_revoke_t, winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Media::Playback::MediaPlayer, winrt::Windows::Media::Playback::MediaPlayerFailedEventArgs> const& value) const;
        WINRT_IMPL_AUTO(void) MediaFailed(winrt::event_token const& token) const noexcept;
        WINRT_IMPL_AUTO(winrt::event_token) CurrentStateChanged(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Media::Playback::MediaPlayer, winrt::Windows::Foundation::IInspectable> const& value) const;
        using CurrentStateChanged_revoker = impl::event_revoker<winrt::Windows::Media::Playback::IMediaPlayer, &impl::abi_t<winrt::Windows::Media::Playback::IMediaPlayer>::remove_CurrentStateChanged>;
        [[nodiscard]] CurrentStateChanged_revoker CurrentStateChanged(auto_revoke_t, winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Media::Playback::MediaPlayer, winrt::Windows::Foundation::IInspectable> const& value) const;
        WINRT_IMPL_AUTO(void) CurrentStateChanged(winrt::event_token const& token) const noexcept;
        WINRT_IMPL_AUTO(winrt::event_token) PlaybackMediaMarkerReached(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Media::Playback::MediaPlayer, winrt::Windows::Media::Playback::PlaybackMediaMarkerReachedEventArgs> const& value) const;
        using PlaybackMediaMarkerReached_revoker = impl::event_revoker<winrt::Windows::Media::Playback::IMediaPlayer, &impl::abi_t<winrt::Windows::Media::Playback::IMediaPlayer>::remove_PlaybackMediaMarkerReached>;
        [[nodiscard]] PlaybackMediaMarkerReached_revoker PlaybackMediaMarkerReached(auto_revoke_t, winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Media::Playback::MediaPlayer, winrt::Windows::Media::Playback::PlaybackMediaMarkerReachedEventArgs> const& value) const;
        WINRT_IMPL_AUTO(void) PlaybackMediaMarkerReached(winrt::event_token const& token) const noexcept;
        WINRT_IMPL_AUTO(winrt::event_token) MediaPlayerRateChanged(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Media::Playback::MediaPlayer, winrt::Windows::Media::Playback::MediaPlayerRateChangedEventArgs> const& value) const;
        using MediaPlayerRateChanged_revoker = impl::event_revoker<winrt::Windows::Media::Playback::IMediaPlayer, &impl::abi_t<winrt::Windows::Media::Playback::IMediaPlayer>::remove_MediaPlayerRateChanged>;
        [[nodiscard]] MediaPlayerRateChanged_revoker MediaPlayerRateChanged(auto_revoke_t, winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Media::Playback::MediaPlayer, winrt::Windows::Media::Playback::MediaPlayerRateChangedEventArgs> const& value) const;
        WINRT_IMPL_AUTO(void) MediaPlayerRateChanged(winrt::event_token const& token) const noexcept;
        WINRT_IMPL_AUTO(winrt::event_token) VolumeChanged(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Media::Playback::MediaPlayer, winrt::Windows::Foundation::IInspectable> const& value) const;
        using VolumeChanged_revoker = impl::event_revoker<winrt::Windows::Media::Playback::IMediaPlayer, &impl::abi_t<winrt::Windows::Media::Playback::IMediaPlayer>::remove_VolumeChanged>;
        [[nodiscard]] VolumeChanged_revoker VolumeChanged(auto_revoke_t, winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Media::Playback::MediaPlayer, winrt::Windows::Foundation::IInspectable> const& value) const;
        WINRT_IMPL_AUTO(void) VolumeChanged(winrt::event_token const& token) const noexcept;
        WINRT_IMPL_AUTO(winrt::event_token) SeekCompleted(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Media::Playback::MediaPlayer, winrt::Windows::Foundation::IInspectable> const& value) const;
        using SeekCompleted_revoker = impl::event_revoker<winrt::Windows::Media::Playback::IMediaPlayer, &impl::abi_t<winrt::Windows::Media::Playback::IMediaPlayer>::remove_SeekCompleted>;
        [[nodiscard]] SeekCompleted_revoker SeekCompleted(auto_revoke_t, winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Media::Playback::MediaPlayer, winrt::Windows::Foundation::IInspectable> const& value) const;
        WINRT_IMPL_AUTO(void) SeekCompleted(winrt::event_token const& token) const noexcept;
        WINRT_IMPL_AUTO(winrt::event_token) BufferingStarted(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Media::Playback::MediaPlayer, winrt::Windows::Foundation::IInspectable> const& value) const;
        using BufferingStarted_revoker = impl::event_revoker<winrt::Windows::Media::Playback::IMediaPlayer, &impl::abi_t<winrt::Windows::Media::Playback::IMediaPlayer>::remove_BufferingStarted>;
        [[nodiscard]] BufferingStarted_revoker BufferingStarted(auto_revoke_t, winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Media::Playback::MediaPlayer, winrt::Windows::Foundation::IInspectable> const& value) const;
        WINRT_IMPL_AUTO(void) BufferingStarted(winrt::event_token const& token) const noexcept;
        WINRT_IMPL_AUTO(winrt::event_token) BufferingEnded(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Media::Playback::MediaPlayer, winrt::Windows::Foundation::IInspectable> const& value) const;
        using BufferingEnded_revoker = impl::event_revoker<winrt::Windows::Media::Playback::IMediaPlayer, &impl::abi_t<winrt::Windows::Media::Playback::IMediaPlayer>::remove_BufferingEnded>;
        [[nodiscard]] BufferingEnded_revoker BufferingEnded(auto_revoke_t, winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Media::Playback::MediaPlayer, winrt::Windows::Foundation::IInspectable> const& value) const;
        WINRT_IMPL_AUTO(void) BufferingEnded(winrt::event_token const& token) const noexcept;
        WINRT_IMPL_AUTO(void) Play() const;
        WINRT_IMPL_AUTO(void) Pause() const;
        WINRT_IMPL_AUTO(void) SetUriSource(winrt::Windows::Foundation::Uri const& value) const;
    };
    template <> struct consume<winrt::Windows::Media::Playback::IMediaPlayer>
    {
        template <typename D> using type = consume_Windows_Media_Playback_IMediaPlayer<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Playback_IMediaPlayer2
    {
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Media::SystemMediaTransportControls) SystemMediaTransportControls() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Media::Playback::MediaPlayerAudioCategory) AudioCategory() const;
        WINRT_IMPL_AUTO(void) AudioCategory(winrt::Windows::Media::Playback::MediaPlayerAudioCategory const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Media::Playback::MediaPlayerAudioDeviceType) AudioDeviceType() const;
        WINRT_IMPL_AUTO(void) AudioDeviceType(winrt::Windows::Media::Playback::MediaPlayerAudioDeviceType const& value) const;
    };
    template <> struct consume<winrt::Windows::Media::Playback::IMediaPlayer2>
    {
        template <typename D> using type = consume_Windows_Media_Playback_IMediaPlayer2<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Playback_IMediaPlayer3
    {
        WINRT_IMPL_AUTO(winrt::event_token) IsMutedChanged(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Media::Playback::MediaPlayer, winrt::Windows::Foundation::IInspectable> const& value) const;
        using IsMutedChanged_revoker = impl::event_revoker<winrt::Windows::Media::Playback::IMediaPlayer3, &impl::abi_t<winrt::Windows::Media::Playback::IMediaPlayer3>::remove_IsMutedChanged>;
        [[nodiscard]] IsMutedChanged_revoker IsMutedChanged(auto_revoke_t, winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Media::Playback::MediaPlayer, winrt::Windows::Foundation::IInspectable> const& value) const;
        WINRT_IMPL_AUTO(void) IsMutedChanged(winrt::event_token const& token) const noexcept;
        WINRT_IMPL_AUTO(winrt::event_token) SourceChanged(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Media::Playback::MediaPlayer, winrt::Windows::Foundation::IInspectable> const& value) const;
        using SourceChanged_revoker = impl::event_revoker<winrt::Windows::Media::Playback::IMediaPlayer3, &impl::abi_t<winrt::Windows::Media::Playback::IMediaPlayer3>::remove_SourceChanged>;
        [[nodiscard]] SourceChanged_revoker SourceChanged(auto_revoke_t, winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Media::Playback::MediaPlayer, winrt::Windows::Foundation::IInspectable> const& value) const;
        WINRT_IMPL_AUTO(void) SourceChanged(winrt::event_token const& token) const noexcept;
        [[nodiscard]] WINRT_IMPL_AUTO(double) AudioBalance() const;
        WINRT_IMPL_AUTO(void) AudioBalance(double value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) RealTimePlayback() const;
        WINRT_IMPL_AUTO(void) RealTimePlayback(bool value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Media::Playback::StereoscopicVideoRenderMode) StereoscopicVideoRenderMode() const;
        WINRT_IMPL_AUTO(void) StereoscopicVideoRenderMode(winrt::Windows::Media::Playback::StereoscopicVideoRenderMode const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Media::Playback::MediaBreakManager) BreakManager() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Media::Playback::MediaPlaybackCommandManager) CommandManager() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Devices::Enumeration::DeviceInformation) AudioDevice() const;
        WINRT_IMPL_AUTO(void) AudioDevice(winrt::Windows::Devices::Enumeration::DeviceInformation const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Media::MediaTimelineController) TimelineController() const;
        WINRT_IMPL_AUTO(void) TimelineController(winrt::Windows::Media::MediaTimelineController const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Foundation::TimeSpan) TimelineControllerPositionOffset() const;
        WINRT_IMPL_AUTO(void) TimelineControllerPositionOffset(winrt::Windows::Foundation::TimeSpan const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Media::Playback::MediaPlaybackSession) PlaybackSession() const;
        WINRT_IMPL_AUTO(void) StepForwardOneFrame() const;
        WINRT_IMPL_AUTO(void) StepBackwardOneFrame() const;
        WINRT_IMPL_AUTO(winrt::Windows::Media::Casting::CastingSource) GetAsCastingSource() const;
    };
    template <> struct consume<winrt::Windows::Media::Playback::IMediaPlayer3>
    {
        template <typename D> using type = consume_Windows_Media_Playback_IMediaPlayer3<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Playback_IMediaPlayer4
    {
        WINRT_IMPL_AUTO(void) SetSurfaceSize(winrt::Windows::Foundation::Size const& size) const;
        WINRT_IMPL_AUTO(winrt::Windows::Media::Playback::MediaPlayerSurface) GetSurface(winrt::Windows::UI::Composition::Compositor const& compositor) const;
    };
    template <> struct consume<winrt::Windows::Media::Playback::IMediaPlayer4>
    {
        template <typename D> using type = consume_Windows_Media_Playback_IMediaPlayer4<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Playback_IMediaPlayer5
    {
        WINRT_IMPL_AUTO(winrt::event_token) VideoFrameAvailable(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Media::Playback::MediaPlayer, winrt::Windows::Foundation::IInspectable> const& value) const;
        using VideoFrameAvailable_revoker = impl::event_revoker<winrt::Windows::Media::Playback::IMediaPlayer5, &impl::abi_t<winrt::Windows::Media::Playback::IMediaPlayer5>::remove_VideoFrameAvailable>;
        [[nodiscard]] VideoFrameAvailable_revoker VideoFrameAvailable(auto_revoke_t, winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Media::Playback::MediaPlayer, winrt::Windows::Foundation::IInspectable> const& value) const;
        WINRT_IMPL_AUTO(void) VideoFrameAvailable(winrt::event_token const& token) const noexcept;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) IsVideoFrameServerEnabled() const;
        WINRT_IMPL_AUTO(void) IsVideoFrameServerEnabled(bool value) const;
        WINRT_IMPL_AUTO(void) CopyFrameToVideoSurface(winrt::Windows::Graphics::DirectX::Direct3D11::IDirect3DSurface const& destination) const;
        WINRT_IMPL_AUTO(void) CopyFrameToVideoSurface(winrt::Windows::Graphics::DirectX::Direct3D11::IDirect3DSurface const& destination, winrt::Windows::Foundation::Rect const& targetRectangle) const;
        WINRT_IMPL_AUTO(void) CopyFrameToStereoscopicVideoSurfaces(winrt::Windows::Graphics::DirectX::Direct3D11::IDirect3DSurface const& destinationLeftEye, winrt::Windows::Graphics::DirectX::Direct3D11::IDirect3DSurface const& destinationRightEye) const;
    };
    template <> struct consume<winrt::Windows::Media::Playback::IMediaPlayer5>
    {
        template <typename D> using type = consume_Windows_Media_Playback_IMediaPlayer5<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Playback_IMediaPlayer6
    {
        WINRT_IMPL_AUTO(winrt::event_token) SubtitleFrameChanged(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Media::Playback::MediaPlayer, winrt::Windows::Foundation::IInspectable> const& handler) const;
        using SubtitleFrameChanged_revoker = impl::event_revoker<winrt::Windows::Media::Playback::IMediaPlayer6, &impl::abi_t<winrt::Windows::Media::Playback::IMediaPlayer6>::remove_SubtitleFrameChanged>;
        [[nodiscard]] SubtitleFrameChanged_revoker SubtitleFrameChanged(auto_revoke_t, winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Media::Playback::MediaPlayer, winrt::Windows::Foundation::IInspectable> const& handler) const;
        WINRT_IMPL_AUTO(void) SubtitleFrameChanged(winrt::event_token const& token) const noexcept;
        WINRT_IMPL_AUTO(bool) RenderSubtitlesToSurface(winrt::Windows::Graphics::DirectX::Direct3D11::IDirect3DSurface const& destination) const;
        WINRT_IMPL_AUTO(bool) RenderSubtitlesToSurface(winrt::Windows::Graphics::DirectX::Direct3D11::IDirect3DSurface const& destination, winrt::Windows::Foundation::Rect const& targetRectangle) const;
    };
    template <> struct consume<winrt::Windows::Media::Playback::IMediaPlayer6>
    {
        template <typename D> using type = consume_Windows_Media_Playback_IMediaPlayer6<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Playback_IMediaPlayer7
    {
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Media::Audio::AudioStateMonitor) AudioStateMonitor() const;
    };
    template <> struct consume<winrt::Windows::Media::Playback::IMediaPlayer7>
    {
        template <typename D> using type = consume_Windows_Media_Playback_IMediaPlayer7<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Playback_IMediaPlayerDataReceivedEventArgs
    {
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Foundation::Collections::ValueSet) Data() const;
    };
    template <> struct consume<winrt::Windows::Media::Playback::IMediaPlayerDataReceivedEventArgs>
    {
        template <typename D> using type = consume_Windows_Media_Playback_IMediaPlayerDataReceivedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Playback_IMediaPlayerEffects
    {
        WINRT_IMPL_AUTO(void) AddAudioEffect(param::hstring const& activatableClassId, bool effectOptional, winrt::Windows::Foundation::Collections::IPropertySet const& configuration) const;
        WINRT_IMPL_AUTO(void) RemoveAllEffects() const;
    };
    template <> struct consume<winrt::Windows::Media::Playback::IMediaPlayerEffects>
    {
        template <typename D> using type = consume_Windows_Media_Playback_IMediaPlayerEffects<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Playback_IMediaPlayerEffects2
    {
        WINRT_IMPL_AUTO(void) AddVideoEffect(param::hstring const& activatableClassId, bool effectOptional, winrt::Windows::Foundation::Collections::IPropertySet const& effectConfiguration) const;
    };
    template <> struct consume<winrt::Windows::Media::Playback::IMediaPlayerEffects2>
    {
        template <typename D> using type = consume_Windows_Media_Playback_IMediaPlayerEffects2<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Playback_IMediaPlayerFailedEventArgs
    {
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Media::Playback::MediaPlayerError) Error() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::hresult) ExtendedErrorCode() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) ErrorMessage() const;
    };
    template <> struct consume<winrt::Windows::Media::Playback::IMediaPlayerFailedEventArgs>
    {
        template <typename D> using type = consume_Windows_Media_Playback_IMediaPlayerFailedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Playback_IMediaPlayerRateChangedEventArgs
    {
        [[nodiscard]] WINRT_IMPL_AUTO(double) NewRate() const;
    };
    template <> struct consume<winrt::Windows::Media::Playback::IMediaPlayerRateChangedEventArgs>
    {
        template <typename D> using type = consume_Windows_Media_Playback_IMediaPlayerRateChangedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Playback_IMediaPlayerSource
    {
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Media::Protection::MediaProtectionManager) ProtectionManager() const;
        WINRT_IMPL_AUTO(void) ProtectionManager(winrt::Windows::Media::Protection::MediaProtectionManager const& value) const;
        WINRT_IMPL_AUTO(void) SetFileSource(winrt::Windows::Storage::IStorageFile const& file) const;
        WINRT_IMPL_AUTO(void) SetStreamSource(winrt::Windows::Storage::Streams::IRandomAccessStream const& stream) const;
        WINRT_IMPL_AUTO(void) SetMediaSource(winrt::Windows::Media::Core::IMediaSource const& source) const;
    };
    template <> struct consume<winrt::Windows::Media::Playback::IMediaPlayerSource>
    {
        template <typename D> using type = consume_Windows_Media_Playback_IMediaPlayerSource<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Playback_IMediaPlayerSource2
    {
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Media::Playback::IMediaPlaybackSource) Source() const;
        WINRT_IMPL_AUTO(void) Source(winrt::Windows::Media::Playback::IMediaPlaybackSource const& value) const;
    };
    template <> struct consume<winrt::Windows::Media::Playback::IMediaPlayerSource2>
    {
        template <typename D> using type = consume_Windows_Media_Playback_IMediaPlayerSource2<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Playback_IMediaPlayerSurface
    {
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::UI::Composition::ICompositionSurface) CompositionSurface() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::UI::Composition::Compositor) Compositor() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Media::Playback::MediaPlayer) MediaPlayer() const;
    };
    template <> struct consume<winrt::Windows::Media::Playback::IMediaPlayerSurface>
    {
        template <typename D> using type = consume_Windows_Media_Playback_IMediaPlayerSurface<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Playback_IPlaybackMediaMarker
    {
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Foundation::TimeSpan) Time() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) MediaMarkerType() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) Text() const;
    };
    template <> struct consume<winrt::Windows::Media::Playback::IPlaybackMediaMarker>
    {
        template <typename D> using type = consume_Windows_Media_Playback_IPlaybackMediaMarker<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Playback_IPlaybackMediaMarkerFactory
    {
        WINRT_IMPL_AUTO(winrt::Windows::Media::Playback::PlaybackMediaMarker) CreateFromTime(winrt::Windows::Foundation::TimeSpan const& value) const;
        WINRT_IMPL_AUTO(winrt::Windows::Media::Playback::PlaybackMediaMarker) Create(winrt::Windows::Foundation::TimeSpan const& value, param::hstring const& mediaMarketType, param::hstring const& text) const;
    };
    template <> struct consume<winrt::Windows::Media::Playback::IPlaybackMediaMarkerFactory>
    {
        template <typename D> using type = consume_Windows_Media_Playback_IPlaybackMediaMarkerFactory<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Playback_IPlaybackMediaMarkerReachedEventArgs
    {
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Media::Playback::PlaybackMediaMarker) PlaybackMediaMarker() const;
    };
    template <> struct consume<winrt::Windows::Media::Playback::IPlaybackMediaMarkerReachedEventArgs>
    {
        template <typename D> using type = consume_Windows_Media_Playback_IPlaybackMediaMarkerReachedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Playback_IPlaybackMediaMarkerSequence
    {
        [[nodiscard]] WINRT_IMPL_AUTO(uint32_t) Size() const;
        WINRT_IMPL_AUTO(void) Insert(winrt::Windows::Media::Playback::PlaybackMediaMarker const& value) const;
        WINRT_IMPL_AUTO(void) Clear() const;
    };
    template <> struct consume<winrt::Windows::Media::Playback::IPlaybackMediaMarkerSequence>
    {
        template <typename D> using type = consume_Windows_Media_Playback_IPlaybackMediaMarkerSequence<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Playback_ITimedMetadataPresentationModeChangedEventArgs
    {
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Media::Core::TimedMetadataTrack) Track() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Media::Playback::TimedMetadataTrackPresentationMode) OldPresentationMode() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Media::Playback::TimedMetadataTrackPresentationMode) NewPresentationMode() const;
    };
    template <> struct consume<winrt::Windows::Media::Playback::ITimedMetadataPresentationModeChangedEventArgs>
    {
        template <typename D> using type = consume_Windows_Media_Playback_ITimedMetadataPresentationModeChangedEventArgs<D>;
    };
}
#endif
