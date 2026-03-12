<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

/**
 * Request payload for creating a new prepay balance.
 */
class BillingPrepayRequest
{
    /**
     * Module the prepay should be applied to (for example &#x60;default&#x60;).
     */
    #[DTA\Data(field: "module", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $module = null;

    /**
     * Amount to add to prepay balance. Minimum is $10.
     */
    #[DTA\Data(field: "amount", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "float"])]
    public float|null $amount = null;

    /**
     * Whether the prepay balance should be used automatically.
     */
    #[DTA\Data(field: "automatic_use", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $automatic_use = null;

}
