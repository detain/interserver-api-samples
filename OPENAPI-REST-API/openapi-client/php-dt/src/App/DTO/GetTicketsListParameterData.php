<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

/**
 * Parameters for getTicketsList
 */
class GetTicketsListParameterData
{
    /**
     * How far back to show tickets from. Value is in days.
     */
    #[DTA\Data(subset: "query", field: "period", nullable: true)]
    #[DTA\Strategy("QueryStringScalar", ["type" => "string"], "query")]
    #[DTA\Validator("QueryStringScalar", ["type" => "string"], subset: "query")]
    public string|null $period = null;

    /**
     * The status of tickets to view. Possible values are Open, Closed, On Hold, and In Progress.  If not specified it will show all types.
     */
    #[DTA\Data(subset: "query", field: "view", nullable: true)]
    #[DTA\Strategy("QueryStringScalar", ["type" => "string"], "query")]
    #[DTA\Validator("QueryStringScalar", ["type" => "string"], subset: "query")]
    public string|null $view = null;

    /**
     * Page number for paginated results.
     */
    #[DTA\Data(subset: "query", field: "page", nullable: true)]
    #[DTA\Strategy("QueryStringScalar", ["type" => "int"], "query")]
    #[DTA\Validator("QueryStringScalar", ["type" => "int"], subset: "query")]
    public int|null $page = null;

}
