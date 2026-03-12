(ns inter-server-management-api.specs.quickserver-order-templates
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            [inter-server-management-api.specs.quickserver-order-templates-ubuntu64 :refer :all]
            )
  (:import (java.io File)))


(def quickserver-order-templates-data
  {
   (ds/opt :Ubuntu) quickserver-order-templates-ubuntu64-spec
   })

(def quickserver-order-templates-spec
  (ds/spec
    {:name ::quickserver-order-templates
     :spec quickserver-order-templates-data}))
