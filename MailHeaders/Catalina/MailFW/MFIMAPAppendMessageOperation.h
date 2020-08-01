//
//     Generated by class-dump 3.5b1 (64 bit) (Debug version compiled Dec  3 2019 19:59:57).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MailFW/MFIMAPOperation.h>

@class NSArray, NSDate;

@interface MFIMAPAppendMessageOperation : MFIMAPOperation
{
    unsigned int _uid;	// 24 = 0x18
    int _internalDateAsInt;	// 28 = 0x1c
    NSArray *_flags;	// 32 = 0x20
}

@property(nonatomic) int internalDateAsInt; // @synthesize internalDateAsInt=_internalDateAsInt;
@property(copy, nonatomic) NSArray *flags; // @synthesize flags=_flags;
@property(nonatomic) unsigned int uid; // @synthesize uid=_uid;
// - (void).cxx_destruct;	// IMP=0x00000000000d6d42
- (id)description;	// IMP=0x00000000000d6bf8
@property(readonly, nonatomic) NSDate *internalDate;
- (void)serializeIntoData:(id)arg1;	// IMP=0x00000000000d6a9e
- (void)_deserializeOpSpecificValuesFromData:(id)arg1 cursor:(unsigned long long *)arg2;	// IMP=0x00000000000d697f
- (unsigned char)operationType;	// IMP=0x00000000000d6974
- (id)initWithAppendedUid:(unsigned int)arg1 flags:(id)arg2 internalDate:(id)arg3 mailbox:(id)arg4;	// IMP=0x00000000000d68b0

// Remaining properties
@property(nonatomic) BOOL usesRealUids; // @dynamic usesRealUids;

@end
