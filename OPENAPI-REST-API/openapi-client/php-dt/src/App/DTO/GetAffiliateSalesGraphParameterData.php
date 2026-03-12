<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

/**
 * Parameters for getAffiliateSalesGraph
 */
class GetAffiliateSalesGraphParameterData
{
    /**
     * Number of days of sales history to include in the graph data. Determines the time window for the returned data points.
     */
    #[DTA\Data(subset: "query", field: "days", nullable: true)]
    #[DTA\Strategy("QueryStringScalar", ["type" => "int"], "query")]
    #[DTA\Validator("QueryStringScalar", ["type" => "int"], subset: "query")]
    public int|null $days = null;

}
