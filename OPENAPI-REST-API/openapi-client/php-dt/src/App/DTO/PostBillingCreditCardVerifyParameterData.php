<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

/**
 * Parameters for postBillingCreditCardVerify
 */
class PostBillingCreditCardVerifyParameterData
{
    /**
     * The credit card ID to verify. Use the ID returned from &#x60;POST /billing/creditcards&#x60;.
     */
    #[DTA\Data(subset: "path", field: "id")]
    #[DTA\Strategy("QueryStringScalar", ["type" => "int"], "path")]
    #[DTA\Validator("QueryStringScalar", ["type" => "int"], subset: "path")]
    public int|null $id = null;

}
