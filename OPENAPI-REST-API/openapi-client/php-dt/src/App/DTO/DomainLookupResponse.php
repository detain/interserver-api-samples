<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

/**
 * Availability, pricing, and order-field metadata for a domain lookup.
 */
class DomainLookupResponse
{
    /**
     * Whether the domain is available to register.
     */
    #[DTA\Data(field: "available", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "bool"])]
    public bool|null $available = null;

    /**
     * Whether the domain is marked as premium by the registrar.
     */
    #[DTA\Data(field: "premium", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "bool"])]
    public bool|null $premium = null;

    /**
     * Indicates if the domain is already used by a website service.
     */
    #[DTA\Data(field: "website", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "bool"])]
    public bool|null $website = null;

    /**
     * Indicates if the domain already exists as a domain service on the account.
     */
    #[DTA\Data(field: "domain_service", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "bool"])]
    public bool|null $domain_service = null;

    /**
     * Service catalog details for the domain&#39;s TLD.
     */
    #[DTA\Data(field: "service", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "object"])]
    public object|null $service = null;

    /**
     * Whether Whois privacy is available for the TLD.
     */
    #[DTA\Data(field: "whois_privacy", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "bool"])]
    public bool|null $whois_privacy = null;

    /**
     * Calculated registration price, when available.
     */
    #[DTA\Data(field: "new", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $new = null;

    /**
     * Calculated renewal price, when available.
     */
    #[DTA\Data(field: "renewal", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $renewal = null;

    /**
     * Calculated transfer price, when available.
     */
    #[DTA\Data(field: "transfer", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $transfer = null;

    /**
     * Registrar field requirements for this domain/TLD.
     */
    #[DTA\Data(field: "fields", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "object"])]
    public object|null $fields = null;

    /**
     * Pricing information normalized to supported currencies.
     */
    #[DTA\Data(field: "currencies", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "object"])]
    public object|null $currencies = null;

}
