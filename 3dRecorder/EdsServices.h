#pragma once
#include "../External/EDSDK/EDSDK.h"

EdsError EDSCALLBACK handleObjectEvent(EdsObjectEvent event, EdsBaseRef object, EdsVoid * context);
EdsError EDSCALLBACK handleStateEvent(EdsPropertyEvent event, EdsPropertyID property, EdsUInt32 parameter, EdsVoid * context);
EdsError EDSCALLBACK handlePropertyEvent(EdsPropertyEvent event, EdsPropertyID id, EdsUInt32 parameter, EdsVoid * context);
EdsError getFirstCamera(EdsCameraRef *camera);
EdsError getTv(EdsCameraRef camera, EdsUInt32 *Tv);
EdsError getTvDesc(EdsCameraRef camera, EdsPropertyDesc *TvDesc);
EdsError setTv(EdsCameraRef camera, EdsUInt32 TvValue);
EdsError downloadImage(EdsDirectoryItemRef directoryItem);
EdsError getVolume(EdsCameraRef camera, EdsVolumeRef * volume);
EdsError getDCIMFolder(EdsVolumeRef volume, EdsDirectoryItemRef * directoryItem);
EdsError takePicture(EdsCameraRef camera);
EdsError startLiveview(EdsCameraRef camera);
EdsError downloadEvfData(EdsCameraRef camera);
EdsError endLiveview(EdsCameraRef camera);