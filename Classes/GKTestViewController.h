/*
 //  iMotorCom
 //
 //  Copyright (c) 2014 Abdullah Ahmed. All rights reserved.
 */

#import <AVFoundation/AVFoundation.h>
#import <AudioToolbox/AudioToolbox.h>
#import <GameKit/GameKit.h>

@interface GKTestViewController : UITableViewController <GKSessionDelegate, GKVoiceChatClient, AVAudioSessionDelegate>

- (void) suspend;
- (void) resume;

@property (nonatomic) CGFloat brightness;


@end