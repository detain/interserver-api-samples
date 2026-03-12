//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:openapi/src/model/backup_ip_info_row.dart';
import 'package:built_collection/built_collection.dart';
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'backup_ip_info.g.dart';

/// IP address information table for a backup service.
///
/// Properties:
/// * [title] - Title of the IP information table.
/// * [rows] 
@BuiltValue()
abstract class BackupIPInfo implements Built<BackupIPInfo, BackupIPInfoBuilder> {
  /// Title of the IP information table.
  @BuiltValueField(wireName: r'title')
  String? get title;

  @BuiltValueField(wireName: r'rows')
  BuiltList<BackupIPInfoRow>? get rows;

  BackupIPInfo._();

  factory BackupIPInfo([void updates(BackupIPInfoBuilder b)]) = _$BackupIPInfo;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(BackupIPInfoBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<BackupIPInfo> get serializer => _$BackupIPInfoSerializer();
}

class _$BackupIPInfoSerializer implements PrimitiveSerializer<BackupIPInfo> {
  @override
  final Iterable<Type> types = const [BackupIPInfo, _$BackupIPInfo];

  @override
  final String wireName = r'BackupIPInfo';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    BackupIPInfo object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
    if (object.title != null) {
      yield r'title';
      yield serializers.serialize(
        object.title,
        specifiedType: const FullType(String),
      );
    }
    if (object.rows != null) {
      yield r'rows';
      yield serializers.serialize(
        object.rows,
        specifiedType: const FullType(BuiltList, [FullType(BackupIPInfoRow)]),
      );
    }
  }

  @override
  Object serialize(
    Serializers serializers,
    BackupIPInfo object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required BackupIPInfoBuilder result,
    required List<Object?> unhandled,
  }) {
    for (var i = 0; i < serializedList.length; i += 2) {
      final key = serializedList[i] as String;
      final value = serializedList[i + 1];
      switch (key) {
        case r'title':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.title = valueDes;
          break;
        case r'rows':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(BuiltList, [FullType(BackupIPInfoRow)]),
          ) as BuiltList<BackupIPInfoRow>;
          result.rows.replace(valueDes);
          break;
        default:
          unhandled.add(key);
          unhandled.add(value);
          break;
      }
    }
  }

  @override
  BackupIPInfo deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = BackupIPInfoBuilder();
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

