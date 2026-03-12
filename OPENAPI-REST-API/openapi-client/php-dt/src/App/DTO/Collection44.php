<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

#[DTA\Strategy("ObjectMap", ["type" => \App\DTO\ServiceType::class])]
#[DTA\Validator("Collection", ["validators" => [
    ["name" => "TypeCompliant", "options" => ["type" => \App\DTO\ServiceType::class]]
]])]
class Collection44 extends \ArrayObject
{
}
