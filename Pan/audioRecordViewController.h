//
//  audioRecordViewController.h
//  Pan
//
//  Created by SWUCOMPUTER on 2017. 4. 12..
//  Copyright © 2017년 Pan. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <AVFoundation/AVFoundation.h>

@import Firebase;

@interface audioRecordViewController : UIViewController<AVAudioRecorderDelegate, AVAudioPlayerDelegate>

@property (strong, nonatomic) FIRDatabaseReference *ref;
@property (strong, nonatomic) FIRStorageReference *storageRef;
@property (strong, nonatomic) NSMutableArray<FIRDataSnapshot *> *lecture;
@property (strong, nonatomic) NSMutableArray<FIRDataSnapshot *> *week;
@property (strong, nonatomic) IBOutlet UIButton *recordPauseButton;
@property (strong, nonatomic) IBOutlet UIButton *playButton;
@property (strong, nonatomic) IBOutlet UIButton *stopButton;
- (IBAction)recordAudio:(id)sender;
- (IBAction)playAudio:(id)sender;
- (IBAction)stopAudio:(id)sender;


@end
