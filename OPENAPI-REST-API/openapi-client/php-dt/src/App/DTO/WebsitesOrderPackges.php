<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

/**
 * The packages data.
 */
class WebsitesOrderPackges
{
    #[DTA\Data(field: "11440")]
    #[DTA\Strategy("Object", ["type" => \App\DTO\WebsitesOrderPackagesInfo::class])]
    #[DTA\Validator("TypeCompliant", ["type" => \App\DTO\WebsitesOrderPackagesInfo::class])]
    public \App\DTO\WebsitesOrderPackagesInfo|null $_11440 = null;

}
