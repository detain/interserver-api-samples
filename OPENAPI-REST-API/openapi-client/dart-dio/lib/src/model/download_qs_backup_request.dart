//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'download_qs_backup_request.g.dart';

/// DownloadQsBackupRequest
///
/// Properties:
/// * [file] - The backup filename to download.
@BuiltValue()
abstract class DownloadQsBackupRequest implements Built<DownloadQsBackupRequest, DownloadQsBackupRequestBuilder> {
  /// The backup filename to download.
  @BuiltValueField(wireName: r'file')
  String get file;

  DownloadQsBackupRequest._();

  factory DownloadQsBackupRequest([void updates(DownloadQsBackupRequestBuilder b)]) = _$DownloadQsBackupRequest;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(DownloadQsBackupRequestBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<DownloadQsBackupRequest> get serializer => _$DownloadQsBackupRequestSerializer();
}

class _$DownloadQsBackupRequestSerializer implements PrimitiveSerializer<DownloadQsBackupRequest> {
  @override
  final Iterable<Type> types = const [DownloadQsBackupRequest, _$DownloadQsBackupRequest];

  @override
  final String wireName = r'DownloadQsBackupRequest';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    DownloadQsBackupRequest object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
    yield r'file';
    yield serializers.serialize(
      object.file,
      specifiedType: const FullType(String),
    );
  }

  @override
  Object serialize(
    Serializers serializers,
    DownloadQsBackupRequest object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required DownloadQsBackupRequestBuilder result,
    required List<Object?> unhandled,
  }) {
    for (var i = 0; i < serializedList.length; i += 2) {
      final key = serializedList[i] as String;
      final value = serializedList[i + 1];
      switch (key) {
        case r'file':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.file = valueDes;
          break;
        default:
          unhandled.add(key);
          unhandled.add(value);
          break;
      }
    }
  }

  @override
  DownloadQsBackupRequest deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = DownloadQsBackupRequestBuilder();
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

