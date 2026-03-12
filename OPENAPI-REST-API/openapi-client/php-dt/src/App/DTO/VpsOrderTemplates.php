<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

/**
 * Templates
 */
class VpsOrderTemplates
{
    #[DTA\Data(field: "hyperv", nullable: true)]
    #[DTA\Strategy("Object", ["type" => \App\DTO\VpsOrderTemplatesHyperv::class])]
    #[DTA\Validator("TypeCompliant", ["type" => \App\DTO\VpsOrderTemplatesHyperv::class])]
    public \App\DTO\VpsOrderTemplatesHyperv|null $hyperv = null;

}
