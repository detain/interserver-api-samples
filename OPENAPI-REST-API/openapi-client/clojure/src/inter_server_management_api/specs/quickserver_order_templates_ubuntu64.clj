(ns inter-server-management-api.specs.quickserver-order-templates-ubuntu64
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            )
  (:import (java.io File)))


(def quickserver-order-templates-ubuntu64-data
  {
   })

(def quickserver-order-templates-ubuntu64-spec
  (ds/spec
    {:name ::quickserver-order-templates-ubuntu64
     :spec quickserver-order-templates-ubuntu64-data}))
