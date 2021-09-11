    def pipeline
    node('master') {
        pipeline = load 'pipeline.groovy'
        pipeline.functionA()
    }
    pipeline.functionB()