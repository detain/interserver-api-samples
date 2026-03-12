//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'domain_row.g.dart';

/// A result row from the `Domains` `GET` request.
///
/// Properties:
/// * [domainId] - The ID number of the domain in our billing system.
/// * [domainHostname] - The hostname of the domain.
/// * [domainExpireDate] - The expiration date of the domain.
/// * [cost] - The cost of the domain.
/// * [domainStatus] - The billing / registration status of the domain.
@BuiltValue()
abstract class DomainRow implements Built<DomainRow, DomainRowBuilder> {
  /// The ID number of the domain in our billing system.
  @BuiltValueField(wireName: r'domain_id')
  String? get domainId;

  /// The hostname of the domain.
  @BuiltValueField(wireName: r'domain_hostname')
  String? get domainHostname;

  /// The expiration date of the domain.
  @BuiltValueField(wireName: r'domain_expire_date')
  String? get domainExpireDate;

  /// The cost of the domain.
  @BuiltValueField(wireName: r'cost')
  String? get cost;

  /// The billing / registration status of the domain.
  @BuiltValueField(wireName: r'domain_status')
  String? get domainStatus;

  DomainRow._();

  factory DomainRow([void updates(DomainRowBuilder b)]) = _$DomainRow;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(DomainRowBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<DomainRow> get serializer => _$DomainRowSerializer();
}

class _$DomainRowSerializer implements PrimitiveSerializer<DomainRow> {
  @override
  final Iterable<Type> types = const [DomainRow, _$DomainRow];

  @override
  final String wireName = r'DomainRow';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    DomainRow object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
    if (object.domainId != null) {
      yield r'domain_id';
      yield serializers.serialize(
        object.domainId,
        specifiedType: const FullType(String),
      );
    }
    if (object.domainHostname != null) {
      yield r'domain_hostname';
      yield serializers.serialize(
        object.domainHostname,
        specifiedType: const FullType(String),
      );
    }
    if (object.domainExpireDate != null) {
      yield r'domain_expire_date';
      yield serializers.serialize(
        object.domainExpireDate,
        specifiedType: const FullType(String),
      );
    }
    if (object.cost != null) {
      yield r'cost';
      yield serializers.serialize(
        object.cost,
        specifiedType: const FullType(String),
      );
    }
    if (object.domainStatus != null) {
      yield r'domain_status';
      yield serializers.serialize(
        object.domainStatus,
        specifiedType: const FullType(String),
      );
    }
  }

  @override
  Object serialize(
    Serializers serializers,
    DomainRow object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required DomainRowBuilder result,
    required List<Object?> unhandled,
  }) {
    for (var i = 0; i < serializedList.length; i += 2) {
      final key = serializedList[i] as String;
      final value = serializedList[i + 1];
      switch (key) {
        case r'domain_id':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.domainId = valueDes;
          break;
        case r'domain_hostname':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.domainHostname = valueDes;
          break;
        case r'domain_expire_date':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.domainExpireDate = valueDes;
          break;
        case r'cost':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.cost = valueDes;
          break;
        case r'domain_status':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.domainStatus = valueDes;
          break;
        default:
          unhandled.add(key);
          unhandled.add(value);
          break;
      }
    }
  }

  @override
  DomainRow deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = DomainRowBuilder();
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

