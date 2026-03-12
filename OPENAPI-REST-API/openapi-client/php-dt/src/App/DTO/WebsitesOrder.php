<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

/**
 * Schema for the WebsitesOrder object
 */
class WebsitesOrder
{
    /**
     * Step description
     */
    #[DTA\Data(field: "step")]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $step = null;

    /**
     * Website description
     */
    #[DTA\Data(field: "website")]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $website = null;

    /**
     * Period description
     */
    #[DTA\Data(field: "period")]
    #[DTA\Validator("Scalar", ["type" => "int"])]
    public int|null $period = null;

    /**
     * Service offer ID description
     */
    #[DTA\Data(field: "serviceOfferId")]
    #[DTA\Validator("Scalar", ["type" => "int"])]
    public int|null $service_offer_id = null;

    #[DTA\Data(field: "packages")]
    #[DTA\Strategy("Object", ["type" => \App\DTO\WebsitesOrderPackages::class])]
    #[DTA\Validator("TypeCompliant", ["type" => \App\DTO\WebsitesOrderPackages::class])]
    public \App\DTO\WebsitesOrderPackages|null $packages = null;

    /**
     * Enable domain registering description
     */
    #[DTA\Data(field: "enableDomainRegistering")]
    #[DTA\Validator("Scalar", ["type" => "bool"])]
    public bool|null $enable_domain_registering = null;

    #[DTA\Data(field: "jsonServices")]
    #[DTA\Strategy("Object", ["type" => \App\DTO\WebsitesOrderJsonServices::class])]
    #[DTA\Validator("TypeCompliant", ["type" => \App\DTO\WebsitesOrderJsonServices::class])]
    public \App\DTO\WebsitesOrderJsonServices|null $json_services = null;

    #[DTA\Data(field: "jsonServiceOffers")]
    #[DTA\Strategy("Object", ["type" => \App\DTO\WebsitesOrderJsonServiceOffers::class])]
    #[DTA\Validator("TypeCompliant", ["type" => \App\DTO\WebsitesOrderJsonServiceOffers::class])]
    public \App\DTO\WebsitesOrderJsonServiceOffers|null $json_service_offers = null;

    #[DTA\Data(field: "serviceTypes")]
    #[DTA\Strategy("Object", ["type" => \App\DTO\WebsitesOrderServiceTypes::class])]
    #[DTA\Validator("TypeCompliant", ["type" => \App\DTO\WebsitesOrderServiceTypes::class])]
    public \App\DTO\WebsitesOrderServiceTypes|null $service_types = null;

    #[DTA\Data(field: "serviceOffers")]
    #[DTA\Strategy("Object", ["type" => \App\DTO\WebsitesOrderServiceOffers::class])]
    #[DTA\Validator("TypeCompliant", ["type" => \App\DTO\WebsitesOrderServiceOffers::class])]
    public \App\DTO\WebsitesOrderServiceOffers|null $service_offers = null;

    #[DTA\Data(field: "packges", nullable: true)]
    #[DTA\Strategy("Object", ["type" => \App\DTO\WebsitesOrderPackges::class])]
    #[DTA\Validator("TypeCompliant", ["type" => \App\DTO\WebsitesOrderPackges::class])]
    public \App\DTO\WebsitesOrderPackges|null $packges = null;

}
