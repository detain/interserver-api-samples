<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

/**
 * URL
 */
class UrlRequest
{
    #[DTA\Data(field: "url", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $url = null;

}
