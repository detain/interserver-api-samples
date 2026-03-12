<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

/**
 * Parameters for getBillingInvoice
 */
class GetBillingInvoiceParameterData
{
    /**
     * The invoice ID. Use IDs from &#x60;GET /billing/invoices&#x60; or from order responses.
     */
    #[DTA\Data(subset: "path", field: "id")]
    #[DTA\Strategy("QueryStringScalar", ["type" => "int"], "path")]
    #[DTA\Validator("QueryStringScalar", ["type" => "int"], subset: "path")]
    public int|null $id = null;

}
