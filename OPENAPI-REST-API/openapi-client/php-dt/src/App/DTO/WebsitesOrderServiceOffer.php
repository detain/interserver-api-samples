<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

class WebsitesOrderServiceOffer
{
    /**
     * The ID of the service offer.
     */
    #[DTA\Data(field: "service_offer_id")]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $service_offer_id = null;

    /**
     * The ID of the associated service.
     */
    #[DTA\Data(field: "service_id")]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $service_id = null;

    /**
     * The introductory cost of the service offer.
     */
    #[DTA\Data(field: "intro_cost")]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $intro_cost = null;

    /**
     * The renewal cost of the service offer.
     */
    #[DTA\Data(field: "renewal_cost")]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $renewal_cost = null;

    /**
     * The introductory frequency of the service offer.
     */
    #[DTA\Data(field: "intro_frequency")]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $intro_frequency = null;

    /**
     * The renewal frequency of the service offer.
     */
    #[DTA\Data(field: "renewal_frequency")]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $renewal_frequency = null;

    /**
     * Indicates if coupons are allowed (1 for yes, 0 for no).
     */
    #[DTA\Data(field: "allow_coupon")]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $allow_coupon = null;

    /**
     * The module of the service offer.
     */
    #[DTA\Data(field: "service_module")]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $service_module = null;

    /**
     * The creation timestamp of the service offer.
     */
    #[DTA\Data(field: "created_at")]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $created_at = null;

    /**
     * The update timestamp of the service offer.
     */
    #[DTA\Data(field: "updated_at", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $updated_at = null;

    /**
     * The deletion timestamp of the service offer.
     */
    #[DTA\Data(field: "deleted_at", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $deleted_at = null;

}
