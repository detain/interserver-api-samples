<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

/**
 * Parameters for getStats
 */
class GetStatsParameterData
{
    /**
     * The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;.
     */
    #[DTA\Data(subset: "path", field: "id")]
    #[DTA\Strategy("QueryStringScalar", ["type" => "int"], "path")]
    #[DTA\Validator("QueryStringScalar", ["type" => "int"], subset: "path")]
    public int|null $id = null;

    /**
     * The timeframe for the statistics.
     */
    #[DTA\Data(subset: "query", field: "time", nullable: true)]
    #[DTA\Strategy("QueryStringScalar", ["type" => "string"], "query")]
    #[DTA\Validator("QueryStringScalar", ["type" => "string"], subset: "query")]
    public string|null $time = null;

}
