<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

/**
 * A block entry from the clickhouse mailblocks server.
 */
class MailBlockClickHouse
{
    #[DTA\Data(field: "date")]
    #[DTA\Strategy("Date")]
    #[DTA\Validator("Date")]
    public \DateTimeInterface|null $date = null;

    #[DTA\Data(field: "from")]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $from = null;

    #[DTA\Data(field: "messageId")]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $message_id = null;

    #[DTA\Data(field: "subject")]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $subject = null;

    #[DTA\Data(field: "to")]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $to = null;

}
