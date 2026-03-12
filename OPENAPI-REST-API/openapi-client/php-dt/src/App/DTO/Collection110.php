<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

#[DTA\Strategy("ScalarList", ["type" => "mixed"])]
#[DTA\Validator("Collection", ["validators" => [
    ["name" => "Scalar", "options" => ["type" => "mixed"]]
]])]
class Collection110 extends \ArrayObject
{
}
