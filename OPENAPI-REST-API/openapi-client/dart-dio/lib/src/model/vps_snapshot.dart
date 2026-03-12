//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'vps_snapshot.g.dart';

/// A VPS snapshot (point-in-time backup) stored on the host node.
///
/// Properties:
/// * [name] - Snapshot name.
/// * [used] - Disk space used by this snapshot in bytes.
/// * [date] - Unix timestamp of when the snapshot was created.
@BuiltValue()
abstract class VpsSnapshot implements Built<VpsSnapshot, VpsSnapshotBuilder> {
  /// Snapshot name.
  @BuiltValueField(wireName: r'name')
  String? get name;

  /// Disk space used by this snapshot in bytes.
  @BuiltValueField(wireName: r'used')
  int? get used;

  /// Unix timestamp of when the snapshot was created.
  @BuiltValueField(wireName: r'date')
  int? get date;

  VpsSnapshot._();

  factory VpsSnapshot([void updates(VpsSnapshotBuilder b)]) = _$VpsSnapshot;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(VpsSnapshotBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<VpsSnapshot> get serializer => _$VpsSnapshotSerializer();
}

class _$VpsSnapshotSerializer implements PrimitiveSerializer<VpsSnapshot> {
  @override
  final Iterable<Type> types = const [VpsSnapshot, _$VpsSnapshot];

  @override
  final String wireName = r'VpsSnapshot';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    VpsSnapshot object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
    if (object.name != null) {
      yield r'name';
      yield serializers.serialize(
        object.name,
        specifiedType: const FullType(String),
      );
    }
    if (object.used != null) {
      yield r'used';
      yield serializers.serialize(
        object.used,
        specifiedType: const FullType(int),
      );
    }
    if (object.date != null) {
      yield r'date';
      yield serializers.serialize(
        object.date,
        specifiedType: const FullType(int),
      );
    }
  }

  @override
  Object serialize(
    Serializers serializers,
    VpsSnapshot object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required VpsSnapshotBuilder result,
    required List<Object?> unhandled,
  }) {
    for (var i = 0; i < serializedList.length; i += 2) {
      final key = serializedList[i] as String;
      final value = serializedList[i + 1];
      switch (key) {
        case r'name':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.name = valueDes;
          break;
        case r'used':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(int),
          ) as int;
          result.used = valueDes;
          break;
        case r'date':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(int),
          ) as int;
          result.date = valueDes;
          break;
        default:
          unhandled.add(key);
          unhandled.add(value);
          break;
      }
    }
  }

  @override
  VpsSnapshot deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = VpsSnapshotBuilder();
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

