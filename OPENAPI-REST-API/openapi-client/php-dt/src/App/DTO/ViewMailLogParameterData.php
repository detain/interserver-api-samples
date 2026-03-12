<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

/**
 * Parameters for viewMailLog
 */
class ViewMailLogParameterData
{
    /**
     * The ID of your mail order this will be sent through.
     */
    #[DTA\Data(subset: "query", field: "id")]
    #[DTA\Strategy("QueryStringScalar", ["type" => "int"], "query")]
    #[DTA\Validator("QueryStringScalar", ["type" => "int"], subset: "query")]
    public int|null $id = null;

    /**
     * Latest date to get emails in unix timestamp format.
     */
    #[DTA\Data(subset: "query", field: "endDate", nullable: true)]
    #[DTA\Strategy("QueryStringScalar", ["type" => "int"], "query")]
    #[DTA\Validator("QueryStringScalar", ["type" => "int"], subset: "query")]
    #[DTA\Validator("Range", ["min" => 0, "max" => 9999999999], subset: "query")]
    public int|null $end_date = null;

    /**
     * subject containing this string
     */
    #[DTA\Data(subset: "query", field: "subject", nullable: true)]
    #[DTA\Strategy("QueryStringScalar", ["type" => "string"], "query")]
    #[DTA\Validator("QueryStringScalar", ["type" => "string"], subset: "query")]
    public string|null $subject = null;

    /**
     * originating ip address sending mail
     */
    #[DTA\Data(subset: "query", field: "origin", nullable: true)]
    #[DTA\Strategy("QueryStringScalar", ["type" => "string"], "query")]
    #[DTA\Validator("QueryStringScalar", ["type" => "string"], subset: "query")]
    public string|null $origin = null;

    /**
     * maximum number of records to return
     */
    #[DTA\Data(subset: "query", field: "limit", nullable: true)]
    #[DTA\Strategy("QueryStringScalar", ["type" => "int"], "query")]
    #[DTA\Validator("QueryStringScalar", ["type" => "int"], subset: "query")]
    #[DTA\Validator("Range", ["min" => 1, "max" => 10000], subset: "query")]
    public int|null $limit = null;

    /**
     * from email address
     */
    #[DTA\Data(subset: "query", field: "from", nullable: true)]
    #[DTA\Strategy("QueryStringScalar", ["type" => "string"], "query")]
    #[DTA\Validator("QueryStringScalar", ["type" => "string"], subset: "query")]
    public string|null $from = null;

    /**
     * mail id
     */
    #[DTA\Data(subset: "query", field: "mailid", nullable: true)]
    #[DTA\Strategy("QueryStringScalar", ["type" => "string"], "query")]
    #[DTA\Validator("QueryStringScalar", ["type" => "string"], subset: "query")]
    public string|null $mailid = null;

    /**
     * number of records to skip for pagination
     */
    #[DTA\Data(subset: "query", field: "skip", nullable: true)]
    #[DTA\Strategy("QueryStringScalar", ["type" => "int"], "query")]
    #[DTA\Validator("QueryStringScalar", ["type" => "int"], subset: "query")]
    #[DTA\Validator("Range", ["min" => 0], subset: "query")]
    public int|null $skip = null;

    /**
     * Filter emails by whether or not they were delivered.
     */
    #[DTA\Data(subset: "query", field: "delivered", nullable: true)]
    #[DTA\Strategy("QueryStringScalar", ["type" => "string"], "query")]
    #[DTA\Validator("QueryStringScalar", ["type" => "string"], subset: "query")]
    public string|null $delivered = null;

    /**
     * mx record mail was sent to
     */
    #[DTA\Data(subset: "query", field: "mx", nullable: true)]
    #[DTA\Strategy("QueryStringScalar", ["type" => "string"], "query")]
    #[DTA\Validator("QueryStringScalar", ["type" => "string"], subset: "query")]
    public string|null $mx = null;

    /**
     * to/destination email address
     */
    #[DTA\Data(subset: "query", field: "to", nullable: true)]
    #[DTA\Strategy("QueryStringScalar", ["type" => "string"], "query")]
    #[DTA\Validator("QueryStringScalar", ["type" => "string"], subset: "query")]
    public string|null $to = null;

    /**
     * earliest date to get emails in unix timestamp format
     */
    #[DTA\Data(subset: "query", field: "startDate", nullable: true)]
    #[DTA\Strategy("QueryStringScalar", ["type" => "int"], "query")]
    #[DTA\Validator("QueryStringScalar", ["type" => "int"], subset: "query")]
    #[DTA\Validator("Range", ["min" => 0, "max" => 9999999999], subset: "query")]
    public int|null $start_date = null;

}
