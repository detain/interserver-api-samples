//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:built_value/json_object.dart';
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'domain_lookup_response.g.dart';

/// Availability, pricing, and order-field metadata for a domain lookup.
///
/// Properties:
/// * [available] - Whether the domain is available to register.
/// * [premium] - Whether the domain is marked as premium by the registrar.
/// * [website] - Indicates if the domain is already used by a website service.
/// * [domainService] - Indicates if the domain already exists as a domain service on the account.
/// * [service] - Service catalog details for the domain's TLD.
/// * [whoisPrivacy] - Whether Whois privacy is available for the TLD.
/// * [new_] - Calculated registration price, when available.
/// * [renewal] - Calculated renewal price, when available.
/// * [transfer] - Calculated transfer price, when available.
/// * [fields] - Registrar field requirements for this domain/TLD.
/// * [currencies] - Pricing information normalized to supported currencies.
@BuiltValue()
abstract class DomainLookupResponse implements Built<DomainLookupResponse, DomainLookupResponseBuilder> {
  /// Whether the domain is available to register.
  @BuiltValueField(wireName: r'available')
  bool? get available;

  /// Whether the domain is marked as premium by the registrar.
  @BuiltValueField(wireName: r'premium')
  bool? get premium;

  /// Indicates if the domain is already used by a website service.
  @BuiltValueField(wireName: r'website')
  bool? get website;

  /// Indicates if the domain already exists as a domain service on the account.
  @BuiltValueField(wireName: r'domain_service')
  bool? get domainService;

  /// Service catalog details for the domain's TLD.
  @BuiltValueField(wireName: r'service')
  JsonObject? get service;

  /// Whether Whois privacy is available for the TLD.
  @BuiltValueField(wireName: r'whois_privacy')
  bool? get whoisPrivacy;

  /// Calculated registration price, when available.
  @BuiltValueField(wireName: r'new')
  String? get new_;

  /// Calculated renewal price, when available.
  @BuiltValueField(wireName: r'renewal')
  String? get renewal;

  /// Calculated transfer price, when available.
  @BuiltValueField(wireName: r'transfer')
  String? get transfer;

  /// Registrar field requirements for this domain/TLD.
  @BuiltValueField(wireName: r'fields')
  JsonObject? get fields;

  /// Pricing information normalized to supported currencies.
  @BuiltValueField(wireName: r'currencies')
  JsonObject? get currencies;

  DomainLookupResponse._();

  factory DomainLookupResponse([void updates(DomainLookupResponseBuilder b)]) = _$DomainLookupResponse;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(DomainLookupResponseBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<DomainLookupResponse> get serializer => _$DomainLookupResponseSerializer();
}

class _$DomainLookupResponseSerializer implements PrimitiveSerializer<DomainLookupResponse> {
  @override
  final Iterable<Type> types = const [DomainLookupResponse, _$DomainLookupResponse];

  @override
  final String wireName = r'DomainLookupResponse';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    DomainLookupResponse object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
    if (object.available != null) {
      yield r'available';
      yield serializers.serialize(
        object.available,
        specifiedType: const FullType(bool),
      );
    }
    if (object.premium != null) {
      yield r'premium';
      yield serializers.serialize(
        object.premium,
        specifiedType: const FullType(bool),
      );
    }
    if (object.website != null) {
      yield r'website';
      yield serializers.serialize(
        object.website,
        specifiedType: const FullType(bool),
      );
    }
    if (object.domainService != null) {
      yield r'domain_service';
      yield serializers.serialize(
        object.domainService,
        specifiedType: const FullType(bool),
      );
    }
    if (object.service != null) {
      yield r'service';
      yield serializers.serialize(
        object.service,
        specifiedType: const FullType(JsonObject),
      );
    }
    if (object.whoisPrivacy != null) {
      yield r'whois_privacy';
      yield serializers.serialize(
        object.whoisPrivacy,
        specifiedType: const FullType(bool),
      );
    }
    if (object.new_ != null) {
      yield r'new';
      yield serializers.serialize(
        object.new_,
        specifiedType: const FullType(String),
      );
    }
    if (object.renewal != null) {
      yield r'renewal';
      yield serializers.serialize(
        object.renewal,
        specifiedType: const FullType(String),
      );
    }
    if (object.transfer != null) {
      yield r'transfer';
      yield serializers.serialize(
        object.transfer,
        specifiedType: const FullType(String),
      );
    }
    if (object.fields != null) {
      yield r'fields';
      yield serializers.serialize(
        object.fields,
        specifiedType: const FullType(JsonObject),
      );
    }
    if (object.currencies != null) {
      yield r'currencies';
      yield serializers.serialize(
        object.currencies,
        specifiedType: const FullType(JsonObject),
      );
    }
  }

  @override
  Object serialize(
    Serializers serializers,
    DomainLookupResponse object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required DomainLookupResponseBuilder result,
    required List<Object?> unhandled,
  }) {
    for (var i = 0; i < serializedList.length; i += 2) {
      final key = serializedList[i] as String;
      final value = serializedList[i + 1];
      switch (key) {
        case r'available':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(bool),
          ) as bool;
          result.available = valueDes;
          break;
        case r'premium':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(bool),
          ) as bool;
          result.premium = valueDes;
          break;
        case r'website':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(bool),
          ) as bool;
          result.website = valueDes;
          break;
        case r'domain_service':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(bool),
          ) as bool;
          result.domainService = valueDes;
          break;
        case r'service':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(JsonObject),
          ) as JsonObject;
          result.service = valueDes;
          break;
        case r'whois_privacy':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(bool),
          ) as bool;
          result.whoisPrivacy = valueDes;
          break;
        case r'new':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.new_ = valueDes;
          break;
        case r'renewal':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.renewal = valueDes;
          break;
        case r'transfer':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.transfer = valueDes;
          break;
        case r'fields':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(JsonObject),
          ) as JsonObject;
          result.fields = valueDes;
          break;
        case r'currencies':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(JsonObject),
          ) as JsonObject;
          result.currencies = valueDes;
          break;
        default:
          unhandled.add(key);
          unhandled.add(value);
          break;
      }
    }
  }

  @override
  DomainLookupResponse deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = DomainLookupResponseBuilder();
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

