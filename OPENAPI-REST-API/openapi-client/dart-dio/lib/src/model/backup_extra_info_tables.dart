//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:openapi/src/model/backup_ip_info.dart';
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'backup_extra_info_tables.g.dart';

/// Supplementary information tables for a backup service (IP info, etc.).
///
/// Properties:
/// * [ipInfo] 
@BuiltValue()
abstract class BackupExtraInfoTables implements Built<BackupExtraInfoTables, BackupExtraInfoTablesBuilder> {
  @BuiltValueField(wireName: r'ip_info')
  BackupIPInfo? get ipInfo;

  BackupExtraInfoTables._();

  factory BackupExtraInfoTables([void updates(BackupExtraInfoTablesBuilder b)]) = _$BackupExtraInfoTables;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(BackupExtraInfoTablesBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<BackupExtraInfoTables> get serializer => _$BackupExtraInfoTablesSerializer();
}

class _$BackupExtraInfoTablesSerializer implements PrimitiveSerializer<BackupExtraInfoTables> {
  @override
  final Iterable<Type> types = const [BackupExtraInfoTables, _$BackupExtraInfoTables];

  @override
  final String wireName = r'BackupExtraInfoTables';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    BackupExtraInfoTables object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
    if (object.ipInfo != null) {
      yield r'ip_info';
      yield serializers.serialize(
        object.ipInfo,
        specifiedType: const FullType(BackupIPInfo),
      );
    }
  }

  @override
  Object serialize(
    Serializers serializers,
    BackupExtraInfoTables object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required BackupExtraInfoTablesBuilder result,
    required List<Object?> unhandled,
  }) {
    for (var i = 0; i < serializedList.length; i += 2) {
      final key = serializedList[i] as String;
      final value = serializedList[i + 1];
      switch (key) {
        case r'ip_info':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(BackupIPInfo),
          ) as BackupIPInfo;
          result.ipInfo.replace(valueDes);
          break;
        default:
          unhandled.add(key);
          unhandled.add(value);
          break;
      }
    }
  }

  @override
  BackupExtraInfoTables deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = BackupExtraInfoTablesBuilder();
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

