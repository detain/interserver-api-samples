<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

/**
 * Affiliate Payment Setup.  Here you can set if you want the payments to go to &#x60;prepay&#x60; or &#x60;paypal&#x60; and the PayPal email address.
 */
class AffiliatePaymentSetup
{
    #[DTA\Data(field: "affiliate_paypal", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $affiliate_paypal = null;

    #[DTA\Data(field: "affiliate_payment_method", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $affiliate_payment_method = null;

}
