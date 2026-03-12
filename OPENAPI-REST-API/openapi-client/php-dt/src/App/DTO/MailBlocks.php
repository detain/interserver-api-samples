<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

/**
 * The listing of blocked emails.
 */
class MailBlocks
{
    #[DTA\Data(field: "local")]
    #[DTA\Strategy("Object", ["type" => \App\DTO\Collection58::class])]
    #[DTA\Validator("TypeCompliant", ["type" => \App\DTO\Collection58::class])]
    public \App\DTO\Collection58|null $local = null;

    #[DTA\Data(field: "mbtrap")]
    #[DTA\Strategy("Object", ["type" => \App\DTO\Collection59::class])]
    #[DTA\Validator("TypeCompliant", ["type" => \App\DTO\Collection59::class])]
    public \App\DTO\Collection59|null $mbtrap = null;

    #[DTA\Data(field: "subject")]
    #[DTA\Strategy("Object", ["type" => \App\DTO\Collection60::class])]
    #[DTA\Validator("TypeCompliant", ["type" => \App\DTO\Collection60::class])]
    public \App\DTO\Collection60|null $subject = null;

}
