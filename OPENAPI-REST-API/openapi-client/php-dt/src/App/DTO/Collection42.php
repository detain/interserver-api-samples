<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

#[DTA\Strategy("ObjectMap", ["type" => \App\DTO\ModuleSettings::class])]
#[DTA\Validator("Collection", ["validators" => [
    ["name" => "TypeCompliant", "options" => ["type" => \App\DTO\ModuleSettings::class]]
]])]
class Collection42 extends \ArrayObject
{
}
