/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#pragma mark Named Structures

struct CGPoint {
    double x;
    double y;
};

struct CGRect {
    struct CGPoint origin;
    struct CGSize size;
};

struct CGSize {
    double width;
    double height;
};

struct FunctionInterpreter<double> {
    void **_field1;
    struct Parser<double> *_field2;
    struct Parser<double> *_field3;
    struct ParserVariable<double> *_field4;
    int _field5;
};

struct FunctionInterpreter<float> {
    void **_field1;
    struct Parser<float> *_field2;
    struct Parser<float> *_field3;
    struct ParserVariable<float> *_field4;
    int _field5;
};

struct MRLayerRenderingStateOpaque {
    float _field1;
    float _field2;
    float _field3;
    float _field4;
    float _field5;
    float _field6;
    float _field7;
    float _field8;
    float _field9;
    float _field10;
    float _field11;
    float _field12;
    float _field13[16];
    float _field14[16];
    float _field15[16];
    _Bool _field16;
    _Bool _field17;
    _Bool _field18;
    _Bool _field19;
    _Bool _field20;
};

struct Parser<double>;

struct Parser<float>;

struct ParserVariable<double>;

struct ParserVariable<float>;

struct _NSRange {
    unsigned long long location;
    unsigned long long length;
};

struct __sbuf {
    char *_field1;
    int _field2;
};

#pragma mark Typedef'd Structures

typedef struct {
    Class _field1;
    id _field2;
    id _field3;
    _Bool _field4;
    _Bool _field5;
} CDStruct_32b7e343;

typedef struct {
    id _field1;
    _Bool _field2;
} CDStruct_d55ca1ec;

typedef struct {
    _Bool _field1;
} CDStruct_b31ca263;

typedef struct {
    unsigned char length;
    float v[4];
} CDStruct_d27e73f0;

typedef struct {
    int _field1;
    _Bool _field2;
    _Bool _field3;
    _Bool _field4;
    _Bool _field5;
    _Bool _field6;
} CDStruct_ad85aa33;

typedef struct {
    int _field1;
    long long _field2;
    long long _field3;
} CDStruct_b6748e3c;

typedef struct {
    long long _field1;
    long long _field2;
} CDStruct_912cb5d2;
