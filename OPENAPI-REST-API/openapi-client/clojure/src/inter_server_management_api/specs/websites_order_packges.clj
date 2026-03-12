(ns inter-server-management-api.specs.websites-order-packges
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            [inter-server-management-api.specs.websites-order-packages-info :refer :all]
            )
  (:import (java.io File)))


(def websites-order-packges-data
  {
   (ds/req :11440) websites-order-packages-info-spec
   })

(def websites-order-packges-spec
  (ds/spec
    {:name ::websites-order-packges
     :spec websites-order-packges-data}))
