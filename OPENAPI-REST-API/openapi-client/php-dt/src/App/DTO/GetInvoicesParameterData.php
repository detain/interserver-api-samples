<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

/**
 * Parameters for getInvoices
 */
class GetInvoicesParameterData
{
    /**
     * pass an optional search string for looking up inventory
     */
    #[DTA\Data(subset: "query", field: "searchString", nullable: true)]
    #[DTA\Strategy("QueryStringScalar", ["type" => "string"], "query")]
    #[DTA\Validator("QueryStringScalar", ["type" => "string"], subset: "query")]
    public string|null $search_string = null;

    /**
     * maximum number of records to return
     */
    #[DTA\Data(subset: "query", field: "limit", nullable: true)]
    #[DTA\Strategy("QueryStringScalar", ["type" => "int"], "query")]
    #[DTA\Validator("QueryStringScalar", ["type" => "int"], subset: "query")]
    #[DTA\Validator("Range", ["min" => 0, "max" => 50], subset: "query")]
    public int|null $limit = null;

    /**
     * number of records to skip for pagination
     */
    #[DTA\Data(subset: "query", field: "skip", nullable: true)]
    #[DTA\Strategy("QueryStringScalar", ["type" => "int"], "query")]
    #[DTA\Validator("QueryStringScalar", ["type" => "int"], subset: "query")]
    #[DTA\Validator("Range", ["min" => 0], subset: "query")]
    public int|null $skip = null;

}
