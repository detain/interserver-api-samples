(ns inter-server-management-api.specs.server-order-os-li
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            [inter-server-management-api.specs.server-order-os :refer :all]
            )
  (:import (java.io File)))


(def server-order-os-li-data
  {
   (ds/opt :51) server-order-os-spec
   })

(def server-order-os-li-spec
  (ds/spec
    {:name ::server-order-os-li
     :spec server-order-os-li-data}))
