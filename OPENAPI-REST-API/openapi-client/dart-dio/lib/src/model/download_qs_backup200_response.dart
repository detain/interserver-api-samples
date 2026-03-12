//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'download_qs_backup200_response.g.dart';

/// DownloadQsBackup200Response
///
/// Properties:
/// * [text] 
/// * [url] - A pre-signed download URL valid for 24 hours.
@BuiltValue()
abstract class DownloadQsBackup200Response implements Built<DownloadQsBackup200Response, DownloadQsBackup200ResponseBuilder> {
  @BuiltValueField(wireName: r'text')
  String? get text;

  /// A pre-signed download URL valid for 24 hours.
  @BuiltValueField(wireName: r'url')
  String? get url;

  DownloadQsBackup200Response._();

  factory DownloadQsBackup200Response([void updates(DownloadQsBackup200ResponseBuilder b)]) = _$DownloadQsBackup200Response;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(DownloadQsBackup200ResponseBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<DownloadQsBackup200Response> get serializer => _$DownloadQsBackup200ResponseSerializer();
}

class _$DownloadQsBackup200ResponseSerializer implements PrimitiveSerializer<DownloadQsBackup200Response> {
  @override
  final Iterable<Type> types = const [DownloadQsBackup200Response, _$DownloadQsBackup200Response];

  @override
  final String wireName = r'DownloadQsBackup200Response';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    DownloadQsBackup200Response object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
    if (object.text != null) {
      yield r'text';
      yield serializers.serialize(
        object.text,
        specifiedType: const FullType(String),
      );
    }
    if (object.url != null) {
      yield r'url';
      yield serializers.serialize(
        object.url,
        specifiedType: const FullType(String),
      );
    }
  }

  @override
  Object serialize(
    Serializers serializers,
    DownloadQsBackup200Response object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required DownloadQsBackup200ResponseBuilder result,
    required List<Object?> unhandled,
  }) {
    for (var i = 0; i < serializedList.length; i += 2) {
      final key = serializedList[i] as String;
      final value = serializedList[i + 1];
      switch (key) {
        case r'text':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.text = valueDes;
          break;
        case r'url':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.url = valueDes;
          break;
        default:
          unhandled.add(key);
          unhandled.add(value);
          break;
      }
    }
  }

  @override
  DownloadQsBackup200Response deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = DownloadQsBackup200ResponseBuilder();
    final serializedList = (serialized as Iterable<Object?>).toList();
    final unhandled = <Object?>[];
    _deserializeProperties(
      serializers,
      serialized,
      specifiedType: specifiedType,
      serializedList: serializedList,
      unhandled: unhandled,
      result: result,
    );
    return result.build();
  }
}

