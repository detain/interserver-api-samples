(ns inter-server-management-api.specs.websites-order-packages
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            )
  (:import (java.io File)))


(def websites-order-packages-data
  {
   (ds/req :11447) string?
   })

(def websites-order-packages-spec
  (ds/spec
    {:name ::websites-order-packages
     :spec websites-order-packages-data}))
