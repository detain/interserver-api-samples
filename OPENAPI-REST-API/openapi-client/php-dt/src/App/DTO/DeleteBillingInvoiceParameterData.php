<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

/**
 * Parameters for deleteBillingInvoice
 */
class DeleteBillingInvoiceParameterData
{
    /**
     * The invoice ID to delete. Only unpaid invoices can be deleted.
     */
    #[DTA\Data(subset: "path", field: "id")]
    #[DTA\Strategy("QueryStringScalar", ["type" => "int"], "path")]
    #[DTA\Validator("QueryStringScalar", ["type" => "int"], subset: "path")]
    public int|null $id = null;

}
