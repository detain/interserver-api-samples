(ns inter-server-management-api.specs.websites-order-json-services
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            )
  (:import (java.io File)))


(def websites-order-json-services-data
  {
   (ds/req :11447) string?
   })

(def websites-order-json-services-spec
  (ds/spec
    {:name ::websites-order-json-services
     :spec websites-order-json-services-data}))
