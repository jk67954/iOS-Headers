/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#pragma mark Named Structures

struct CADoublePoint {
    double _field1;
    double _field2;
};

struct CADoubleRect {
    struct CADoublePoint _field1;
    struct CADoubleSize _field2;
};

struct CADoubleSize {
    double _field1;
    double _field2;
};

struct CGAffineTransform {
    float a;
    float b;
    float c;
    float d;
    float tx;
    float ty;
};

struct CGPoint {
    float x;
    float y;
};

struct CGRect {
    struct CGPoint origin;
    struct CGSize size;
};

struct CGSize {
    float width;
    float height;
};

struct UIEdgeInsets {
    float _field1;
    float _field2;
    float _field3;
    float _field4;
};

struct UIImage {
    Class _field1;
    void *_field2;
    float _field3;
    struct {
        unsigned int :1;
        unsigned int :3;
        unsigned int :1;
        unsigned int :1;
        unsigned int :1;
        unsigned int :16;
        unsigned int :2;
    } _field4;
};

struct UIView {
    Class _field1;
    id _field2;
    id _field3;
    id _field4;
    id _field5;
    float _field6;
    int _field7;
    id _field8;
    id _field9;
    unsigned int _field10;
    struct {
        unsigned int :1;
        unsigned int :1;
        unsigned int :1;
        unsigned int :1;
        unsigned int :1;
        unsigned int :1;
        unsigned int :1;
        unsigned int :1;
        unsigned int :1;
        unsigned int :1;
        unsigned int :1;
        unsigned int :1;
        unsigned int :1;
        unsigned int :1;
        unsigned int :1;
        unsigned int :6;
        unsigned int :1;
        unsigned int :1;
        unsigned int :1;
        unsigned int :1;
        unsigned int :1;
        unsigned int :1;
        unsigned int :1;
        unsigned int :1;
        unsigned int :1;
        unsigned int :1;
        unsigned int :1;
        unsigned int :1;
        unsigned int :1;
        unsigned int :1;
        unsigned int :1;
        unsigned int :1;
        unsigned int :1;
        unsigned int :1;
        unsigned int :1;
        unsigned int :1;
        unsigned int :1;
        unsigned int :1;
        unsigned int :1;
        unsigned int :1;
        unsigned int :1;
        unsigned int :1;
        unsigned int :1;
        unsigned int :1;
        unsigned int :1;
        unsigned int :1;
        unsigned int :1;
        unsigned int :1;
        unsigned int :1;
        unsigned int :1;
        unsigned int :1;
        unsigned int :1;
        unsigned int :1;
        unsigned int :1;
        unsigned int :1;
        unsigned int :1;
        unsigned int :1;
        unsigned int :1;
        unsigned int :1;
        unsigned int :1;
        unsigned int :3;
        unsigned int :1;
        unsigned int :1;
        unsigned int :1;
        unsigned int :2;
        unsigned int :2;
    } _field11;
};

struct _GEOTileKey {
    unsigned int z:6;
    unsigned int x:26;
    unsigned int y:26;
    unsigned int type:6;
    unsigned int pixelSize:8;
    unsigned int textScale:8;
    unsigned int provider:8;
    unsigned int expires:1;
    unsigned int reserved1:7;
    unsigned char reserved2[4];
};

struct _NSRange {
    unsigned int _field1;
    unsigned int _field2;
};

struct deque<float, std::__1::allocator<float>> {
    struct __split_buffer<float *, std::__1::allocator<float *>> {
        float **__first_;
        float **__begin_;
        float **__end_;
        struct __compressed_pair<float **, std::__1::allocator<float *>> {
            float **__first_;
        } __end_cap_;
    } __map_;
    unsigned int __start_;
    struct __compressed_pair<unsigned long, std::__1::allocator<float>> {
        unsigned long __first_;
    } __size_;
};

#pragma mark Typedef'd Structures

typedef struct {
    unsigned int _field1;
    unsigned int _field2;
    unsigned int _field3;
} CDStruct_32a7f38a;

typedef struct {
    double v[4][4];
} CDStruct_aa5aacbc;

typedef struct {
    char *_field1;
    unsigned int _field2;
    unsigned int _field3;
} CDStruct_b337ead5;

typedef struct {
    double x;
    double y;
    double z;
    double w;
} CDStruct_91d2e2b9;

typedef struct {
    double x;
    double y;
    double z;
} CDStruct_31142d93;

typedef struct {
    int x;
    int y;
    int z;
    float contentScaleFactor;
} CDStruct_a1199def;

typedef struct {
    int _field1;
    int _field2;
    int _field3;
    int _field4;
    float _field5;
} CDStruct_1fbca27c;

typedef struct {
    float _field1;
    struct {
        double _field1;
        double _field2;
    } _field2;
} CDStruct_0c7fa811;

typedef struct {
    int _field1;
    struct {
        double _field1;
        double _field2;
    } _field2;
    struct CGPoint _field3;
    struct CGPoint _field4;
    id _field5;
    char _field6;
} CDStruct_dc034332;

// Ambiguous groups
typedef struct {
    double _field1;
    double _field2;
} CDStruct_c3b9c2ee;

typedef struct {
    double latitude;
    double longitude;
} CDStruct_2c43369c;

typedef struct {
    double width;
    double height;
} CDStruct_8caa76fc;

typedef struct {
    struct {
        double _field1;
        double _field2;
    } _field1;
    struct {
        double _field1;
        double _field2;
    } _field2;
} CDStruct_90e2a262;

typedef struct {
    CDStruct_2c43369c center;
    struct {
        double latitudeDelta;
        double longitudeDelta;
    } span;
} CDStruct_feeb6407;

typedef struct {
    struct {
        double x;
        double y;
    } origin;
    CDStruct_8caa76fc size;
} CDStruct_02837cd9;

