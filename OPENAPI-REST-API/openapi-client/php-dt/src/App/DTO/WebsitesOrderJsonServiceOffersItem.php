<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

class WebsitesOrderJsonServiceOffersItem
{
    /**
     * Service offer ID
     */
    #[DTA\Data(field: "service_offer_id", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $service_offer_id = null;

    /**
     * Service ID
     */
    #[DTA\Data(field: "service_id", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $service_id = null;

    /**
     * Introductory cost
     */
    #[DTA\Data(field: "intro_cost", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "int"])]
    public int|null $intro_cost = null;

    /**
     * Renewal cost
     */
    #[DTA\Data(field: "renewal_cost", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "int"])]
    public int|null $renewal_cost = null;

    /**
     * Introductory frequency
     */
    #[DTA\Data(field: "intro_frequency", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $intro_frequency = null;

    /**
     * Renewal frequency
     */
    #[DTA\Data(field: "renewal_frequency", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $renewal_frequency = null;

    /**
     * Allow coupon
     */
    #[DTA\Data(field: "allow_coupon", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $allow_coupon = null;

    /**
     * Service module
     */
    #[DTA\Data(field: "service_module", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $service_module = null;

    /**
     * Creation date
     */
    #[DTA\Data(field: "created_at", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $created_at = null;

    /**
     * Update date
     */
    #[DTA\Data(field: "updated_at", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $updated_at = null;

    /**
     * Deletion date
     */
    #[DTA\Data(field: "deleted_at", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $deleted_at = null;

    /**
     * Currency symbol
     */
    #[DTA\Data(field: "currencySymbol", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $currency_symbol = null;

}
