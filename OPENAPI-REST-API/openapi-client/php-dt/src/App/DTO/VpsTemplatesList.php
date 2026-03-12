<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

/**
 * A listing of the OS Templates available for use.
 */
class VpsTemplatesList
{
    /**
     * A listing of the templates.
     */
    #[DTA\Data(field: "templates")]
    #[DTA\Strategy("Object", ["type" => \App\DTO\Collection77::class])]
    #[DTA\Validator("TypeCompliant", ["type" => \App\DTO\Collection77::class])]
    public \App\DTO\Collection77|null $templates = null;

}
