(ns inter-server-management-api.specs.server-order-cp-li
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            [inter-server-management-api.specs.server-order-control-panel :refer :all]
            )
  (:import (java.io File)))


(def server-order-cp-li-data
  {
   (ds/opt :9) server-order-control-panel-spec
   })

(def server-order-cp-li-spec
  (ds/spec
    {:name ::server-order-cp-li
     :spec server-order-cp-li-data}))
