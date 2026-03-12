//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'quickserver_row.g.dart';

/// A result row from the `Quickservers` `GET` request.
///
/// Properties:
/// * [qsId] - The id of the qs.
/// * [qsName] - The name of the qs.
/// * [cost] - The cost of the qs.
/// * [qsHostname] - The hostname of the qs.
/// * [qsStatus] - The status of the qs.
/// * [qsComment] - The comment of the qs.
@BuiltValue()
abstract class QuickserverRow implements Built<QuickserverRow, QuickserverRowBuilder> {
  /// The id of the qs.
  @BuiltValueField(wireName: r'qs_id')
  String get qsId;

  /// The name of the qs.
  @BuiltValueField(wireName: r'qs_name')
  String get qsName;

  /// The cost of the qs.
  @BuiltValueField(wireName: r'cost')
  String get cost;

  /// The hostname of the qs.
  @BuiltValueField(wireName: r'qs_hostname')
  String get qsHostname;

  /// The status of the qs.
  @BuiltValueField(wireName: r'qs_status')
  String get qsStatus;

  /// The comment of the qs.
  @BuiltValueField(wireName: r'qs_comment')
  String get qsComment;

  QuickserverRow._();

  factory QuickserverRow([void updates(QuickserverRowBuilder b)]) = _$QuickserverRow;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(QuickserverRowBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<QuickserverRow> get serializer => _$QuickserverRowSerializer();
}

class _$QuickserverRowSerializer implements PrimitiveSerializer<QuickserverRow> {
  @override
  final Iterable<Type> types = const [QuickserverRow, _$QuickserverRow];

  @override
  final String wireName = r'QuickserverRow';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    QuickserverRow object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
    yield r'qs_id';
    yield serializers.serialize(
      object.qsId,
      specifiedType: const FullType(String),
    );
    yield r'qs_name';
    yield serializers.serialize(
      object.qsName,
      specifiedType: const FullType(String),
    );
    yield r'cost';
    yield serializers.serialize(
      object.cost,
      specifiedType: const FullType(String),
    );
    yield r'qs_hostname';
    yield serializers.serialize(
      object.qsHostname,
      specifiedType: const FullType(String),
    );
    yield r'qs_status';
    yield serializers.serialize(
      object.qsStatus,
      specifiedType: const FullType(String),
    );
    yield r'qs_comment';
    yield serializers.serialize(
      object.qsComment,
      specifiedType: const FullType(String),
    );
  }

  @override
  Object serialize(
    Serializers serializers,
    QuickserverRow object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required QuickserverRowBuilder result,
    required List<Object?> unhandled,
  }) {
    for (var i = 0; i < serializedList.length; i += 2) {
      final key = serializedList[i] as String;
      final value = serializedList[i + 1];
      switch (key) {
        case r'qs_id':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.qsId = valueDes;
          break;
        case r'qs_name':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.qsName = valueDes;
          break;
        case r'cost':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.cost = valueDes;
          break;
        case r'qs_hostname':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.qsHostname = valueDes;
          break;
        case r'qs_status':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.qsStatus = valueDes;
          break;
        case r'qs_comment':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.qsComment = valueDes;
          break;
        default:
          unhandled.add(key);
          unhandled.add(value);
          break;
      }
    }
  }

  @override
  QuickserverRow deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = QuickserverRowBuilder();
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

