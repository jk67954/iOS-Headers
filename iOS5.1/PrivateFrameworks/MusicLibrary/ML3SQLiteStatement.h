/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@interface ML3SQLiteStatement : NSObject
{
    struct sqlite3_stmt *_sqliteStatement;
    BOOL _inUse;
}

@property(nonatomic) BOOL inUse; // @synthesize inUse=_inUse;
@property(readonly, nonatomic) struct sqlite3_stmt *sqliteStatement; // @synthesize sqliteStatement=_sqliteStatement;
- (void)dealloc;
- (id)initWithSqliteStatement:(struct sqlite3_stmt *)arg1;

@end
