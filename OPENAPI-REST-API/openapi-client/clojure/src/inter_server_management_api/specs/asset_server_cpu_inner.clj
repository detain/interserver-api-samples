(ns inter-server-management-api.specs.asset-server-cpu-inner
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            )
  (:import (java.io File)))


(def asset-server-cpu-inner-data
  {
   })

(def asset-server-cpu-inner-spec
  (ds/spec
    {:name ::asset-server-cpu-inner
     :spec asset-server-cpu-inner-data}))
