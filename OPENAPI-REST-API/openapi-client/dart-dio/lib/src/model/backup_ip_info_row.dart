//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'backup_ip_info_row.g.dart';

/// A single row in the backup IP information table.
///
/// Properties:
/// * [desc] - Description of the IP information.
/// * [value] - Value of the IP information.
@BuiltValue()
abstract class BackupIPInfoRow implements Built<BackupIPInfoRow, BackupIPInfoRowBuilder> {
  /// Description of the IP information.
  @BuiltValueField(wireName: r'desc')
  String? get desc;

  /// Value of the IP information.
  @BuiltValueField(wireName: r'value')
  String? get value;

  BackupIPInfoRow._();

  factory BackupIPInfoRow([void updates(BackupIPInfoRowBuilder b)]) = _$BackupIPInfoRow;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(BackupIPInfoRowBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<BackupIPInfoRow> get serializer => _$BackupIPInfoRowSerializer();
}

class _$BackupIPInfoRowSerializer implements PrimitiveSerializer<BackupIPInfoRow> {
  @override
  final Iterable<Type> types = const [BackupIPInfoRow, _$BackupIPInfoRow];

  @override
  final String wireName = r'BackupIPInfoRow';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    BackupIPInfoRow object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
    if (object.desc != null) {
      yield r'desc';
      yield serializers.serialize(
        object.desc,
        specifiedType: const FullType(String),
      );
    }
    if (object.value != null) {
      yield r'value';
      yield serializers.serialize(
        object.value,
        specifiedType: const FullType(String),
      );
    }
  }

  @override
  Object serialize(
    Serializers serializers,
    BackupIPInfoRow object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required BackupIPInfoRowBuilder result,
    required List<Object?> unhandled,
  }) {
    for (var i = 0; i < serializedList.length; i += 2) {
      final key = serializedList[i] as String;
      final value = serializedList[i + 1];
      switch (key) {
        case r'desc':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.desc = valueDes;
          break;
        case r'value':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.value = valueDes;
          break;
        default:
          unhandled.add(key);
          unhandled.add(value);
          break;
      }
    }
  }

  @override
  BackupIPInfoRow deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = BackupIPInfoRowBuilder();
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

