#ifndef FFMPEG_MOVIE_H
#define FFMPEG_MOVIE_H

#include <avcodec.h>
#include <avformat.h>

/* movie constructor */
PHP_FUNCTION(ffmpeg_movie);

/* movie methods */
PHP_FUNCTION(getDuration);
PHP_FUNCTION(getFrameCount);
PHP_FUNCTION(getFrameRate);
PHP_FUNCTION(getFileName);
PHP_FUNCTION(getComment);
PHP_FUNCTION(getTitle);
PHP_FUNCTION(getAuthor);
PHP_FUNCTION(getCopyright);
PHP_FUNCTION(getFrameWidth);
PHP_FUNCTION(getFrameHeight);
PHP_FUNCTION(getFrameNumber);
PHP_FUNCTION(getPixelFormat);
PHP_FUNCTION(getBitRate);
PHP_FUNCTION(hasAudio);
PHP_FUNCTION(getFrame);
PHP_FUNCTION(getVideoCodec);
PHP_FUNCTION(getAudioCodec);
PHP_FUNCTION(getAudioChannels);


typedef struct {
    AVFormatContext *fmt_ctx;

    AVCodecContext *codec_ctx[MAX_STREAMS];
} ff_movie_context;

#endif // FFMPEG_MOVIE_H