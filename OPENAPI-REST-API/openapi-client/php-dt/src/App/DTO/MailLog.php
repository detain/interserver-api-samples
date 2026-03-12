<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

/**
 * Mail log records
 */
class MailLog
{
    /**
     * total number of mail log entries
     */
    #[DTA\Data(field: "total")]
    #[DTA\Validator("Scalar", ["type" => "int"])]
    public int|null $total = null;

    /**
     * number of emails skipped in listing
     */
    #[DTA\Data(field: "skip")]
    #[DTA\Validator("Scalar", ["type" => "int"])]
    public int|null $skip = null;

    /**
     * number of emails to return
     */
    #[DTA\Data(field: "limit")]
    #[DTA\Validator("Scalar", ["type" => "int"])]
    public int|null $limit = null;

    #[DTA\Data(field: "emails")]
    #[DTA\Strategy("Object", ["type" => \App\DTO\Collection146::class])]
    #[DTA\Validator("TypeCompliant", ["type" => \App\DTO\Collection146::class])]
    public \App\DTO\Collection146|null $emails = null;

}
