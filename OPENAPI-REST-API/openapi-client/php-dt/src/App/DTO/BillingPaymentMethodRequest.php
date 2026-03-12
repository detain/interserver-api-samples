<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

/**
 * Payload for updating the default account payment method.
 */
class BillingPaymentMethodRequest
{
    /**
     * Payment method identifier (cc, paypal, or cc{index}).
     */
    #[DTA\Data(field: "payment_method", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $payment_method = null;

    /**
     * Whether automatic credit card payments are enabled.
     */
    #[DTA\Data(field: "cc_auto", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $cc_auto = null;

}
